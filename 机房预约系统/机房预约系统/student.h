#pragma once
#include"identity.h"
#include"computerroom.h"
#include<vector>
#include"globalFile.h"
#include<fstream>
#include"OrderFIle.h"

class Student :public Identity
{
public:
	//Ĭ�Ϲ���
	Student();

	//�вι���
	Student(int id, string name,string pwd);

	//�˵�����(��д�����д��麯��)
	virtual void operMenu();

	//����ԤԼ
	void ApplyOrder();

	//�鿴����ԤԼ
	void ShowMyOrder();

	//�鿴����ԤԼ
	void ShowAllOrder();

	//ȡ��ԤԼ
	void CancelOrder();

	//ѧ��ѧ��
	int m_Id;

	//��������
	vector<ComputerRoom>vc;

	//��ʼ����������
	void initVC();

};