#pragma once
#include"identity.h"
#include<fstream>
#include"OrderFIle.h"
#include<vector>

class Teacher :public Identity
{
public:

	//Ĭ�Ϲ��캯��
	Teacher();

	//�вι��캯��
	Teacher(int empid, string name, string pwd);

	//�˵�����(��д�����д��麯��)
	virtual void operMenu();

	//�鿴����ԤԼ
	void ShowAllOrder();

	//���ԤԼ
	void ValidOrder();

	//��ְ�����
	int m_EmpId;
};
