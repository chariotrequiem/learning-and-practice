#include<iostream>
#include<vector>
#include<map>
using namespace std;
#include<ctime>
#include<string>

/*公司招聘10个员工（ABCDEFGHIJ），10名员工进入公司后，需要指派员工在哪个部门工作
员工信息有：姓名 工资组成 ；部门有：策划，美术，研发
随机给10名员工分配部门和工资
通过multimap进行信息插入，key（部门编号），value（员工）
分部门显示员工信息*/

#define CEHUA 0
#define MEISHU 1
#define 研发 2
class worker
{
public:
	string m_Name;
	int m_Salary;
};

void createworker(vector<worker>&v)
{
	string nameseed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++)
	{
		worker w;
		w.m_Name = "员工";
		w.m_Name += nameseed[i];

		w.m_Salary = rand() % 10000 + 10000;//10000~19999

		//将员工放进到容器中
		v.push_back(w);
	}
}

//员工分组
void setgroup(vector<worker>&v,multimap<int,worker>&m)
{
	for (vector<worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		//产生随机部门标号
		int deptId = rand() % 3;//0 1 2

		//将员工插入到分组中
		//key 部门编号  value  具体员工
		m.insert(make_pair(deptId, *it));
	}
}

void ShowWoekerByGroup(multimap<int,worker>&m)
{
	cout << "策划部门：" << endl;
	multimap<int, worker>::iterator pos = m.find(CEHUA);
	int count = m.count(CEHUA);//统计策划部门具体人数
	int index = 0;
	for (; pos != m.end() && index < count ; pos++,index++)
	{
		cout << "姓名：" << pos->second.m_Name << "工资：" << pos->second.m_Salary << endl;
	}
	cout << "——————————————————————" << endl;
	cout << "美术部门：" << endl;
	pos = m.find(MEISHU);
	count = m.count(MEISHU);//统计策划部门具体人数
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名：" << pos->second.m_Name << "工资：" << pos->second.m_Salary << endl;
	}

	cout << "——————————————————————" << endl;
	cout << "研发部门：" << endl;
	pos = m.find(研发);
	count = m.count(研发);//统计策划部门具体人数
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名：" << pos->second.m_Name << "工资：" << pos->second.m_Salary << endl;
	}
}
int main()
{

	srand((unsigned int)time(NULL));
	//1.创建员工
	vector<worker>Vworker;
	createworker(Vworker);

	//2.员工分组
	multimap<int, worker>mworker;
	setgroup(Vworker, mworker);

	//3.分组显示员工
	ShowWoekerByGroup(mworker);
	//测试
	//for (vector<worker>::iterator it = Vworker.begin(); it != Vworker.end(); it++)
	//{
	//	cout << "姓名：" << it->m_Name << "\t工资：" << it->m_Salary << endl;
	//}
	return 0;
}
