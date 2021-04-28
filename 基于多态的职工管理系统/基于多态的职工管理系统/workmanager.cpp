#include"workmanager.h"

//���캯��
WorkManager::WorkManager()
{
	//1.�ļ�������
	ifstream ifs;
	ifs.open(FILENAME, ios::in);//���ļ�
	if (!ifs.is_open())
	{
		//cout << "�ļ�������" << endl;
		//��ʼ������
		this->m_ElemNum = 0;
		//��ʼ������ָ��
		this->m_EleArr = NULL;
		//��ʼ���ļ��Ƿ�Ϊ��
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}

	//2.�ļ�����������Ϊ��
	char ch;
	ifs >> ch;//>>������һ���ַ�
	if (ifs.eof())//eof�ļ�ĩβ
	{
		//�ļ�Ϊ��
		//cout << "�ļ�Ϊ��" << endl;
		//��ʼ������
		this->m_ElemNum = 0;
		//��ʼ������ָ��
		this->m_EleArr = NULL;
		//��ʼ���ļ��Ƿ�Ϊ��
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}

	//3.�ļ������Ҵ�������
	int num = this->get_EmpNum();
	//cout << "ְ������Ϊ�� " << num << endl;
	this->m_ElemNum = num;

	//���ٿռ�
	this->m_EleArr = new Worker*[this->m_ElemNum];
	//���ļ��е����ݴ浽������
	this->init_Emp();
	//���Դ���
	//for (int i = 0; i < this->m_ElemNum; i++)
	//{
	//	cout <<"ְ����ţ� "<<this->m_EleArr[i]->m_Id
	//		 <<" ������ " <<this->m_EleArr[i]->m_Name
	//		 <<" ���ű�ţ� "<<this->m_EleArr[i]->m_DeptId << endl;
	//}

}
//չʾ�˵�
void WorkManager::show_Menu()
{
	cout << "******************************************" << endl;
	cout << "********** ��ӭʹ��ְ������ϵͳ **********" << endl;
	cout << "**********   0.�˳�����ϵͳ   ************" << endl;
	cout << "**********   1.����ְ����Ϣ   ************" << endl;
	cout << "**********   2.��ʾְ����Ϣ   ************" << endl;
	cout << "**********   3.ɾ��ְ����Ϣ   ************" << endl;
	cout << "**********   4.�޸�ְ����Ϣ   ************" << endl;
	cout << "**********   5.����ְ����Ϣ   ************" << endl;
	cout << "**********   6.���ձ������   ************" << endl;
	cout << "**********   7.���������Ϣ   ************" << endl;
	cout << "******************************************" << endl;
	cout << endl;
}

//�˳�ϵͳ����
void WorkManager::exitsystem()
{
	cout << "��ӭ�´�ʹ��" << endl;
	exit(0);//�˳�
}

//����ְ������
void WorkManager::Add_Emp()
{
	cout << "������Ҫ���ӵ�Ա������: " << endl;
	int addNum = 0;
	cin >> addNum;

	if (addNum > 0)
	{
		//���
		//������ӵ��µĿռ��С
		int newsize = this->m_ElemNum + addNum;//�¿ռ����� = ԭ����¼���� + ��������
		//�����¿ռ�
		Worker **newspace = new Worker*[newsize];
		//��ԭ���ռ��µ����ݿ������¿ռ�
		if (this->m_EleArr != NULL)
		{
			for (int i = 0; i < this->m_ElemNum; i++)
			{
				newspace[i] = this->m_EleArr[i];
			}
		}
		//�������������
		for (int i = 0; i < addNum; i++)
		{
			int id;//ְ�����
			string name;//ְ������
			int dSelect;//����ѡ��
			cout << "�������" << i + 1 << "����ְ���ı�ţ� " << endl;
			cin >> id;
			cout << "�������" << i + 1 << "����ְ�������� " << endl;
			cin >> name;
			cout << "��ѡ���ְ����λ" << endl;
			cout << "1.��ְͨ��" << endl;
			cout << "2.����" << endl;
			cout << "3.�ϰ�" << endl;
			cin >> dSelect;

			Worker *w = NULL;
			switch (dSelect)
			{
			case 1:
				w = new Employee(id, name, 1);
				break;
			case 2:
				w = new Manager(id, name, 2);
				break;
			case 3:
				w = new Boss(id, name, 3);
				break;
			default:
				break;
			}
			//��������ְ��ָ�뱣�浽������
			newspace[this->m_ElemNum + i] = w;
		}
		//�ͷ�ԭ�пռ�
		delete[] this->m_EleArr;

		//�����¿ռ�ָ��
		this->m_EleArr = newspace;

		//�����µ�ְ������
		this->m_ElemNum = newsize;

		//�ɹ���Ӻ󣬱������ݵ��ļ���
		this->save();

		//����Ա����Ϊ�ձ�־
		this->m_FileIsEmpty = false;

		//��ʾ��ӳɹ�
		cout << "�ɹ����" << addNum << "����Ա��" << endl;
	}
	else
	{
		cout << "��������" << endl;

	}
	//������������ص��ϼ�Ŀ¼
	system("pause");
	system("cls");
}

//�����ļ�
void WorkManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);//�������ʽ�����ļ���д�ļ���
	//��ÿ��������д���ļ���
	for (int i = 0; i < this->m_ElemNum; i++)
	{
		ofs << this->m_EleArr[i]->m_Id << " "
			<< this->m_EleArr[i]->m_Name << " "
			<< this->m_EleArr[i]->m_DeptId << endl;
	}
	//�ر��ļ�
	ofs.close();
}

//ͳ���ļ�������
int WorkManager::get_EmpNum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);//���ļ� ��

	int id;
	string name;
	int dId;
	int num = 0;
	while (ifs >> id &&ifs >> name && ifs >> dId)
	{
		//ͳ����������
		num++;
	}
	return num;
}

//��ʼ��Ա��
void WorkManager::init_Emp()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int dId;

	int index = 0;
	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		Worker *w = NULL;

		if (dId == 1)//��ְͨ��
		{
			w = new Employee(id, name, dId);
		}
		else if (dId == 2)
		{
			w = new Manager(id, name, dId);
		}
		else
		{
			w = new Boss(id, name, dId);
		}
		this->m_EleArr[index] = w;
		index++;
	}

	//�ر��ļ�
	ifs.close();
}

//��ʾԱ������
void WorkManager::show_Emp()
{
	//�ж��ļ��Ƿ�Ϊ��
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��߼�¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < m_ElemNum; i++)
		{
			//���ö�̬���ó���ӿ�
			this->m_EleArr[i]->showInfo();
		}
	}
	//�����������
	system("pause");
	system("cls");
}

//ɾ��Ա������
void WorkManager::Del_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	}
	else
	{
		//����ְ�����ɾ��
		cout << "��������Ҫɾ����ְ�����" << endl;
		int id = 0;
		cin >> id;

		int index = this->IsExist(id);
		if (index != -1)//˵��ְ��������Ҫɾ����indexλ�õ�ְ��
		{
			//������ɾ��һ�����ݱ��ʾ�������ǰ��
			for (int i = index; i < this->m_ElemNum - 1; i++)
			{
				//����ǰ��
				this->m_EleArr[i] = this->m_EleArr[i + 1];
			}

			
			///���������м�¼����Ա����
			this->m_ElemNum--;
			if (this->m_ElemNum == 0)
				this->m_FileIsEmpty = true;
			//ͬ�����µ��ļ���
			this->save();
			cout << "ɾ���ɹ�" << endl;
		}
		else
		{
			cout << "ɾ��ʧ�ܣ�δ�ҵ���ְ��" << endl;
		}
	}

	system("pause");
	system("cls");
}

//�ж�ְ���Ƿ����,����ڷ���ְ�����������е�λ�ã������ڷ���-1
int WorkManager::IsExist(int id)
{
	int index = -1;
	
	for (int i = 0; i < this->m_ElemNum; i++)
	{
		if (this->m_EleArr[i]->m_Id == id)
		{
			//�ҵ�ְ��
			index = i;
			break;
		}
	}
	return index;
}


//�޸�Ա������
void WorkManager::Mod_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ��!" << endl;
	}
	else
	{
		cout << "������Ҫ�޸ĵ�ְ����ţ�" << endl;
		int id;
		cin >> id;
		int ret = this->IsExist(id);
		if (ret != -1)
		{
			//���ҵ���ŵ�ְ��
			delete this->m_EleArr[ret];
			int newid = 0;
			string newname = "";
			int dSelect = 0;
			cout << "�鵽��" << id << "��ְ������������ְ���ţ� " << endl;
			cin >> newid;
			cout << "������������" << endl;
			cin >> newname;

			cout << "�������λ��" << endl;
			cout << "1.��ְͨ��" << endl;
			cout << "2.����" << endl;
			cout << "3.�ϰ�" << endl;

			cin >> dSelect;
			Worker * w = NULL;
			switch (dSelect)
			{
			case 1:
				w = new Employee(newid, newname, dSelect);
				break;
			case 2:
				w = new Manager(newid, newname, dSelect);
				break;
			case 3:
				w = new Boss(newid, newname, dSelect);
				break;
			default:
				break;
			}

			//��������
			this->m_EleArr[ret] = w;
			cout << "�޸ĳɹ�" << endl;

			//���浽�ļ���
			this->save();
		}
		else
		{
			cout << "�޸�ʧ�ܣ�δ���ҵ���ְ��" << endl;
		}
	}
	system("pause");
	system("cls");
}

//����ְ��
void WorkManager::Find_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��߼�¼Ϊ��" << endl;
	}
	else
	{
		cout << "��������ҵķ�ʽ��" << endl;
		cout << "1.��ְ����Ų���" << endl;
		cout << "2.��ְ����������" << endl;

		int select = 0;
		cin >> select;
		if (select == 1)
		{
			//����Ų�
			int id;
			cout << "��������ҵ�ְ����ţ�" << endl;
			cin >> id;
			int ret = IsExist(id);
			if (ret != -1)
			{
				//�ҵ�ְ��
				cout << "��ְ����Ϣ���£�" << endl;
				this->m_EleArr[ret]->showInfo();
			}
			else
			{
				cout << "����ʧ�ܣ����޴���" << endl;
			}
		}
		else if (select == 2)
		{
			//��������
			string name;
			cout << "��������ҵ�ְ��������" << endl;
			cin >> name;

			//����һ���ж��Ƿ�鵽�ı�־
			bool flag = false;//Ĭ��δ�ҵ�ְ��
			for (int i = 0; i < m_ElemNum; i++)
			{
				if (this->m_EleArr[i]->m_Name == name)
				{
					cout << "���ҳɹ���ְ�����Ϊ��"
						<< this->m_EleArr[i]->m_Id
						<< "��ְ������Ϣ����" << endl;
					flag = true;
					this->m_EleArr[i]->showInfo();
				}
			}
			if (flag == false)
			{
				cout << "����ʧ�ܣ����޴���" << endl;
			}
		}
		else
		{
			cout << "������������" << endl;
		}
	}
	//�����������
	system("pause");
	system("cls");
}


//������
void WorkManager::Sort_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "��ѡ������ʽ" << endl;
		cout << "1.��ְ������������" << endl;
		cout << "2.��ְ���Ž�������" << endl;

		int select = 0;
		cin >> select;
		for (int i = 0; i < m_ElemNum; i++)
		{
			int MinOrMax = i;//������Сֵ �� ���ֵ�±�
			for (int j = i + 1; j < this->m_ElemNum; j++)
			{
				if (select == 1)//����
				{
					if (this->m_EleArr[MinOrMax]->m_Id > this->m_EleArr[j]->m_Id)
					{
						MinOrMax = j;
					}
				}
				else//����
				{
					if (this->m_EleArr[MinOrMax]->m_Id < this->m_EleArr[j]->m_Id)
					{
						MinOrMax = j;
					}
				}

				//�ж�һ��ʼ�϶�����Сֵ�����ֵ�ǲ��Ǽ������Сֵ�����ֵ��������ǣ���������
				if (i != MinOrMax)
				{
					Worker *temp = this->m_EleArr[i];
					this->m_EleArr[i] = this->m_EleArr[MinOrMax];
					this->m_EleArr[MinOrMax] = temp;
				}
			}
		}

		cout << " ����ɹ��������Ľ��Ϊ��"<< endl;//
		this->save();//�����Ľ�����浽�ļ���
		this->show_Emp();//չʾ����Ա��
	}
}

//����ļ�
void WorkManager::Clean_File()
{
	cout << "ȷ��ɾ����" << endl;
	cout << "1.ȷ��" << endl;
	cout << "2.����" << endl;

	int select = 0;
	cin >> select;
	if (select == 1)
	{
		//����ļ�
		ofstream ofs(FILENAME, ios::trunc);//ɾ���ļ������´���
		ofs.close();

		if (this->m_EleArr != NULL)
		{
			//ɾ��������ÿ��ְ������
			for (int i = 0; i < m_ElemNum; i++)
			{
				delete this->m_EleArr[i];
				this->m_EleArr[i] = NULL;
			}

			//ɾ����������ָ��
			delete[] this->m_EleArr;
			this->m_EleArr = NULL;
			this->m_ElemNum = 0;
			this->m_FileIsEmpty = true;
		}

		cout << "��ճɹ�" << endl;
	}
	system("pause");
	system("cls");
}

//��������
WorkManager::~WorkManager()
{
	if (this->m_EleArr != NULL)
	{
		for (int i = 0; i < this->m_ElemNum; i++)
		{
			if (this->m_EleArr[i] != NULL)
			{
				delete this->m_EleArr[i];
			}
		}
		delete[] this->m_EleArr;
		this->m_EleArr = NULL;
	}
}


