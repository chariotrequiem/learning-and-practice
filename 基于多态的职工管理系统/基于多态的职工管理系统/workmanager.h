#pragma once//��ֹͷ�ļ��ظ�����
#include<iostream>//�������������ͷ�ļ�
using namespace std;
#include<fstream>
#define FILENAME "empFile.txt"
#include"worker.h"
#include"Boss.h"
#include"employee.h"
#include"manager.h"

class WorkManager
{
public:
	//���캯��
	WorkManager();

	//չʾ�˵�
	void show_Menu();

	//�˳�����
	void exitsystem();

	//��¼�ļ��е�����
	int m_ElemNum;
	//Ա�������ָ��
	Worker **m_EleArr;

	//����ְ��
	void Add_Emp();

	//�����ļ�
	void save();

	//�ж��ļ��Ƿ�Ϊ�� ��־
	bool m_FileIsEmpty;

	//ͳ���ļ�������
	int get_EmpNum();

	//��ʼ��Ա��
	void init_Emp();

	//��ʾԱ������
	void show_Emp();

	//ɾ��Ա������
	void Del_Emp();

	//�ж�ְ���Ƿ����,����ڷ���ְ�����������е�λ�ã������ڷ���-1
	int IsExist(int id);


	//�޸�Ա������
	void Mod_Emp();

	//����ְ��
	void Find_Emp();

	//������
	void Sort_Emp();

	//����ļ�
	void Clean_File();

	//��������
	~WorkManager();





};
