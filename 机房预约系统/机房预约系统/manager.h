#pragma once
#include<fstream>
#include"identity.h"
#include"globalFile.h"


class Manager :public Identity
{
public:
	//Ĭ�Ϲ���
	Manager();

	//�вι���
	Manager(string name, string pwd);

	//ѡ��˵�(��д�����д��麯��)
	virtual void operMenu();

	//����˺�
	void AddAccount();

	//�鿴�˺�
	void ShowAccount();

	//�鿴����
	void ShowComputer();

	//���ԤԼ
	void ClearFile();
	
};
