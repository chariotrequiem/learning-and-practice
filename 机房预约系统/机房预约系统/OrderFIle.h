#pragma once
#include<iostream>
using namespace std;
#include<map>
#include"globalFile.h"
#include<fstream>
#include<string>

class OrderFile
{
public:
	//���캯��
	OrderFile();

	//����ԤԼ��¼
	void updateOrder();

	//ԤԼ����
	int m_Size;

	//��¼����ԤԼѶϢ����  key��¼����  value��¼����ļ�ֵ����Ϣ
	map<int, map<string, string>>m_orderData;

};


