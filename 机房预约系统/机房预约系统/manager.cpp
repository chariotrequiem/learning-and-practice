#include"manager.h"


//默认构造
Manager::Manager()
{

}

//有参构造
Manager::Manager(string name, string pwd)
{
	//初始化管理员信息
	this->m_Name = name;
	this->m_Pwd = pwd;
}

//选择菜单(重写父类中纯虚函数)
void Manager::operMenu()
{
	cout << "欢迎管理员"<<this->m_Name<<"进入管理员菜单!" << endl;
	cout << "————————————" << endl;
	cout << "|      1.添加账号      |" << endl;
	cout << "|      2.查看账号      |" << endl;
	cout << "|      3.查看机房      |" << endl;
	cout << "|      4.清空预约      |" << endl;
	cout << "|      0.注销登录      |" << endl;
	cout << "————————————" << endl;
	cout << endl << "请输入你的选择：" << endl;

}

//添加账号
void Manager::AddAccount()
{
	cout << "请输入要添加的账号类型" << endl;
	cout << "1.添加学生" << endl;
	cout << "2.添加老师" << endl;

	string filename;//操作文件名
	string tip;//提示ID号

	ofstream ofs;//文件操作对象

	int select = 0;
	cin >> select;
	if (select == 1)
	{
		//添加学生账号
		filename = STUDENT_FILE;
		tip = "请输入学号：";
	}
	else if (select == 2)
	{
		//添加老师账号
		filename = TEACHER_FILE;
		tip = "请输入教职工编号：";
	}

	ofs.open(filename, ios::out | ios::app);//利用追加方式写文件

	int id;//学号或职工号
	string name;
	string pwd;

	cout << tip << endl;
	cin >> id;
	cout << "请输入姓名：" << endl;
	cin >> name;
	cout << "请输入密码：" << endl;
	cin >> pwd;

	//开始向文件中添加数据
	ofs << id << " " << name << " " << pwd << " " << endl;
	cout << "添加成功" << endl;

	system("pause");
	system("cls");

	ofs.close();


}

//查看账号
void Manager::ShowAccount()
{

}

//查看机房
void Manager::ShowComputer()
{

}

//清空预约
void Manager::ClearFile()
{

}