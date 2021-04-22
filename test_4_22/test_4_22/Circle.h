#pragma once
#include"point.h"


class Circle
{
public:
	void setR(int r);//设置半径

	int getR();//获取半径

	void setCenter(Point center);//设置圆心
	
	Point getCenter();//获取圆心

private:
	//在类中可以让另一个类作为本类成员
	Point m_Center;
	int m_R;
};
