#include"contact.h"



int main()
{
	//����ͨѶ¼�ṹ�����
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
			Addcontact(&c);//ʹ��ַ���ݣ���������ʵ��
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
			cout << "��ӭ�´�ʹ��" << endl;
			//system("pause");//��������˳�
			break;
		default:
			break;
		}
	} while (select);
	return 0;

}