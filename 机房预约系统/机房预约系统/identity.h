#pragma once
#include<iostream>
using namespace std;
#include<string>
//��ݳ������
class Identity
{
public:
	//�����˵�  ���麯��
	//���д��麯���������ڳ����࣬�����಻����ʵ��������
	virtual void operMenu() = 0;
	//
	string m_Name;//�û���
	string m_Pwd;//����
};
