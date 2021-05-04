#include <iostream>
using namespace std;

struct NodeType
{
	int num;
	char name[20];
	NodeType* next;
};
class Jose
{
private:
	NodeType* p_head;
public:
	Jose()
	{
		p_head = new NodeType;  //����ͷ������
		p_head->next = p_head;  //�յ�ѭ������
	}
	~Jose() {}
	void creat();
	void print();
};
void Jose::creat()
{
	int i = 0, n;
	NodeType *newp, *tempNode;
	tempNode = p_head;
	cout << "\n enter total nums of people: ";
	cin >> n;
	for (i = 0; i < n; ++i)
	{
		newp = new NodeType;
		newp->num = i + 1;
		cout << "\n enter name: ";
		cin >> newp->name;
		newp->next = p_head;    //�˴�p_headΪβ���ڱ�
		tempNode->next = newp;   //���ϵ���β����β���ڱ�֮ǰ������ڵ�
		tempNode = newp;
	}
	tempNode->next = p_head->next;  //�Ͽ���ͷ�ڱ�
	delete p_head;                  //�ͷ��ڱ��ڵ�
	p_head = tempNode->next;        //ͷ���ָ���һ���ڵ�
}
void Jose::print()
{
	int m, i;
	NodeType *del = p_head, *tempNode;
	cout << "\n enter value m(m>=2):";
	cin >> m;
	cout << "\n start:" << endl;
	while (del->next != del)         //����ڵ������Ϊ1
	{
		for (i = 1; i < m; ++i)        //del�����ƶ�mλ
		{
			tempNode = del;
			del = del->next;
		}
		cout << del->num << " " << del->name << endl;
		tempNode->next = del->next;     //�Ͽ�del�ڵ�
		delete del;                     //�ͷ�del�ڵ�
		del = tempNode->next;
	}
	cout << del->num << " " << del->name << endl;
	delete del;             //����ֻʣһ���ڵ�ֱ��ɾ��
}

int main()
{
	Jose gameList;
	gameList.creat();
	gameList.print();
	cout << "press any key to exit!";
	cin.get();
	return 0;
}