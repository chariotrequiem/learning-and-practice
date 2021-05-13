#pragma once
#include<fstream>
#include"identity.h"
#include"globalFile.h"
#include<vector>
#include<map>
#include"student.h"
#include"teacher.h"
#include<algorithm>
#include"computerroom.h"


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

	//��ʼ������
	void initVector();

	//ѧ������
	vector<Student>vStu;

	//��ʦ����
	vector<Teacher>vTea;

	//��ʼ����������
	void initVC();

	//����ظ�  ����1  ���ѧ��/ְ����  ����2  �������
	bool checkRepeat(int id, int type);

	//������Ϣ����
	vector<ComputerRoom>vc;
};
