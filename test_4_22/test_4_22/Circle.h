#pragma once
#include"point.h"


class Circle
{
public:
	void setR(int r);//���ð뾶

	int getR();//��ȡ�뾶

	void setCenter(Point center);//����Բ��
	
	Point getCenter();//��ȡԲ��

private:
	//�����п�������һ������Ϊ�����Ա
	Point m_Center;
	int m_R;
};
