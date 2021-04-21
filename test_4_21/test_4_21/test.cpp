#include"contact.h"



int main()
{
	//创建通讯录结构体变量
	contact c;
	c.m_size = 0;
	int select = 0;


	do
	{
		Menu();
		cin >> select;
		switch (select)
		{
		case 1:
			Addcontact(&c);//使用址传递，可以修饰实参
			break;
		case 2:
			Bubble_contact(&c, c.m_size);
			Showcontact(&c);
			break;
		case 3:
			Delcontact(&c);
			break;
		case 4:
			Searchcontact(&c);
			break;
		case 5:
			modifycontact(&c);
			break;
		case 6:
			destorycontact(&c);
			break;
		case 0:
			cout << "欢迎下次使用" << endl;
			//system("pause");//按任意键退出
			break;
		default:
			break;
		}
	} while (select);
	return 0;

}