#include<iostream>
using namespace std;
#include<vector>
#include<string>
//int main()
//{
//	vector<string> v1 = { "abd0","doedw","the" };
//	for (vector<string>::iterator it = v1.begin(); it != v1.end(); it++)
//		cout <<<< endl;
//	return 0;
//}

//int main()
//{
//	//10��int����Ԫ�أ�ÿ������ʼ��Ϊ-1
//	vector<int> ivec(10, -1);
//	//10��string���͵�Ԫ�أ�ÿ��������ʼ��Ϊ"hi!"
//	vector<string> svec(10, "hi!");
//	vector<int> v2;
//	for (int i = 0; i < 1000; i++)
//		v2.push_back(i);
//
//
//	return 0;
//}

//int main()
//{
//	string word;
//	vector<string> text;
//	while (cin >> word)
//	{
//		text.push_back(word);
//
//	}
//	for (int i = 0; i < 2; i++)
//		cout << text[i] << endl;
//	return 0;
//}

//int main()
//{
//	int i;
//	vector<int> v;
//	char cont = 'y';
//	while (cin >> i)
//	{
//		v.push_back(i);
//		cout << "�Ƿ�Ҫ������(y or n)" << endl;
//		cin >> cont;
//		if (cont != 'y' && cont != 'Y')
//			break;
//	}
//	return 0;
//}

//int main()
//{
//	string s;
//	vector<string> v;
//	char cont = 'y';
//
//	while (cin >> s)
//	{
//		v.push_back(s);
//		cout << "�Ƿ�Ҫ������(y or n)" << endl;
//		cin >> cont;
//		if (cont != 'y')
//			break;
//	}
//	for (auto c : v)
//		cout << c << " ";
//	cout << endl;
//	return 0;
//}

//int main()
//{
//	vector<int> v{ 1,2,3,4,5,6,7,8,9,10 };
//	for (auto &i : v)
//		i *= i;
//	for (auto c : v)
//		cout << c << " ";
//	cout << endl;
//	return 0;
//}

//int main()
//{
//	vector<unsigned> scores(11, 0);
//	unsigned grade;
//	while (cin >> grade)
//	{
//		if (grade <= 100)
//			++scores[grade / 10];
//	}
//		
//	return 0;
//}

//int main()
//{
//	vector<int> v3(10, 42);
//	cout << v3.size() << endl;
//	for (decltype(v3.size()) ix = 0; ix != v3.size(); ix++)
//		cout << v3[ix]<<" ";
//	return 0;
//}
//int main()
//{
//	string s;
//	vector<string> v;
//	char cont = 'y';
//	while (cin >> s)
//	{
//		v.push_back(s);
//		cout << "�Ƿ������y or n��" << endl;
//		cin >> cont;
//		if (cont != 'y')
//			break;
//	}
//	cout << "ת����Ľ����" << endl;
//	for (auto &mem : v)
//	{
//		for (auto &c : mem)
//			c = toupper(c);
//		cout << mem << endl;
//	}
//	return 0;
//}

int main()
{
	vector<int> v;
	int ival;
	cout << "������һ������" << endl;
	while (cin >> ival)
		v.push_back(ival);
	if (v.size() == 0)
	{
		cout << "û���κ�Ԫ��" << endl;
		return -1;
	}
	cout << "��������֮��Ϊ��" << endl;
	for (decltype (v.size()) i = 0; i < v.size(); i++)
	{
		cout << v[i] + v[i + 1] << " ";

	}
	if (v.size() % 2 != 0)
	{
		cout << v[v.size() - 1];
	}
	return 0;
}