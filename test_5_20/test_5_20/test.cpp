#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<ctime>
#include<cstdlib>
//int main()
//{
//	string s("hello world");
//	if (s.begin() != s.end())
//	{
//		auto it = s.begin();
//		*it = toupper(*it);
//	}
//	cout << s << endl;
//	return 0;
//}

//int  main()
//{
//	string s("hello world");
//	if (s.begin() != s.end())
//	{
//		for (auto it = s.begin(); it != s.end() ; ++it)
//			*it = toupper(*it);
//	}
//	cout << s << endl;
//	return 0;
//}

//int main()
//{
//	vector<int> v;
//	const vector<int> cv;
//	auto it1 = v.begin();
//	auto it2 = cv, begin();
//	auto it3 = v.cbegin();//it3的类型为vector<int>::const_iterator
//}

//int main()
//{
//	vector<string> v = { "hello","world" };
//	for (auto it = v.cbegin(); it != v.cend() && !it->empty(); ++it)
//		cout << *it << endl;
//	return 0;
//}


//int main()
//{
//	vector<int> v = { 10,42 };
//	int count = 0;
//	for (auto it = v.cbegin(); it != v.cend(); ++it)
//	{
//		cout << *it << endl;
//		++count;
//	}
//	cout << "容量为：" << count << endl;
//	return 0;
//}

//int main()
//{
//	vector<int> v (10,42);
//	int count = 0;
//	for (auto it = v.cbegin(); it != v.cend(); ++it)
//	{
//		cout << *it << endl;
//		++count;
//	}
//	cout << "容量为：" << count << endl;
//	return 0;
//}



//int main()
//{
//	vector<string> text;
//	string s;
//	char cont = 'y';
//	while (getline(cin, s))
//	{
//		text.push_back(s);
//		cout << "是否继续？y or n" << endl;
//		cin >> cont;
//		if (cont != 'y')
//			break;
//		cout << "输入下一句" << endl;
//	}
//	for (auto it = text.begin(); it != text.end() && !it->empty(); it++)
//	{
//		for (auto it2 = it->begin(); it2 != it->end(); it2++)
//			*it2 = toupper(*it2);
//		cout << *it << endl;
//	}
//
//	return 0;
//}


int main()
{
	vector<int> v;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		v.push_back(rand() % 1000);
	}
	cout << "随机生成数字位：" << endl;
	for (auto it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	for (auto it = v.begin(); it != v.end(); it++)
	{
		*it *= 2;
		cout << *it << " ";
	}
	return 0;
}