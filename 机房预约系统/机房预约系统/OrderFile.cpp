#include"OrderFIle.h"

//构造函数
OrderFile::OrderFile()
{
	ifstream ifs;
	ifs.open(ORDER_FILE, ios::in);

	string date;//日期
	string interval;//时间段
	string stuId;//学生编号
	string stuName;//姓名
	string roomId;//机房编号
	string status;//状态

	this->m_Size = 0;//预约记录条数

	while (ifs>>date && ifs>>interval && ifs>>stuId && 
		   ifs>> stuName && ifs>> roomId && ifs>> status)
	{
		//cout << date << endl;
		//cout << interval << endl;
		//cout << stuId << endl;
		//cout << stuName << endl;
		//cout << roomId << endl;
		//cout << status << endl;
		//cout << endl;

		//date:1
		string key;
		string value;
		map<string, string>m;

		//截取日期
		int pos = date.find(":");//4
		if (pos != -1)
		{
			key = date.substr(0, pos);//从0开始，截取pos个字符
			value = date.substr(pos + 1, date.size() - pos - 1);
			m.insert(make_pair(key, value));
		}
		//cout << key << endl;
		//cout << value << endl;

		//截取时间段
		pos = interval.find(":");
		if (pos != -1)
		{
			key = interval.substr(0, pos);//从0开始，截取pos个字符
			value = interval.substr(pos + 1, interval.size() - pos - 1);
			m.insert(make_pair(key, value));
		}

		//截取学生ID
		pos = stuId.find(":");
		if (pos != -1)
		{
			key = stuId.substr(0, pos);//从0开始，截取pos个字符
			value = stuId.substr(pos + 1, stuId.size() - pos - 1);
			m.insert(make_pair(key, value));
		}

		//截取学生姓名
		pos = stuName.find(":");
		if (pos != -1)
		{
			key = stuName.substr(0, pos);//从0开始，截取pos个字符
			value = stuName.substr(pos + 1, stuName.size() - pos - 1);
			m.insert(make_pair(key, value));
		}

		//截取机房编号
		pos = roomId.find(":");
		if (pos != -1)
		{
			key = roomId.substr(0, pos);//从0开始，截取pos个字符
			value = roomId.substr(pos + 1, roomId.size() - pos - 1);
			m.insert(make_pair(key, value));
		}

		//截取预约状态
		pos = status.find(":");
		if (pos != -1)
		{
			key = status.substr(0, pos);//从0开始，截取pos个字符
			value = status.substr(pos + 1, status.size() - pos - 1);
			m.insert(make_pair(key, value));
		}

		//将小map容器放进更大的map
		this->m_orderData.insert(make_pair(this->m_Size, m));
		this->m_Size++;
	}
	ifs.close();

	//测试大map容器
	//for (map<int, map<string, string>>::iterator it = m_orderData.begin(); it != m_orderData.end(); it++)
	//{
	//	cout << it->first << endl;
	//	for (map<string, string>::iterator mit = (*it).second.begin(); mit != (*it).second.end(); mit++)
	//	{
	//		cout << mit->first << " " << mit->second << endl;
	//	}
	//}
}


//更新预约记录
void OrderFile::updateOrder()
{
	if (this->m_Size == 0)
	{
		return;
	}
	ofstream ofs(ORDER_FILE, ios::out | ios::trunc);
	for (int i = 0; i < m_Size; i++)
	{
		ofs << "date:" << this->m_orderData[i]["date"] << " ";
		ofs << "interval:" << this->m_orderData[i]["interval"] << " ";		
		ofs << "stuId:" << this->m_orderData[i]["stuId"] << " ";
		ofs << "stuName:" << this->m_orderData[i]["stuName"] << " ";
		ofs << "roomId:" << this->m_orderData[i]["roomId"] << " ";
		ofs << "status:" << this->m_orderData[i]["status"] << endl;
	}

	ofs.close();
}

