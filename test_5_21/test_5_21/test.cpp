#include<iostream>
using namespace std;
#include<string>

//string sa[10];
//int ia[10];
//int main()
//{
//	string sa2[10];
//	int ia2[10];
//	for (auto c : sa)
//		cout << c << " ";
//	cout << endl;
//	for (auto c : ia)
//		cout << c << " ";
//	cout << endl;
//	for (auto c : sa2)
//		cout << c << " ";
//	cout << endl;
//	for (auto c : ia2)
//		cout << c << " ";
//	cout << endl;
//
//	return 0;
//}

//int main()
//{
//	unsigned scores[11] = {};
//	unsigned grade;
//	while (cin >> grade)
//	{
//		if (grade <= 100)
//			++scores[grade / 10];
//	}
//	for (auto i : scores)
//		cout << i << " ";
//	cout << endl;
//
//	return 0;
//}

int main()
{
	const int sz = 10;
	int a[sz], b[sz];
	for (int i = 0; i < sz; i++)
		a[i] = i;
	for (int j = 0; j < sz; j++)
		b[j] = a[j];
	for (auto val : b)
		cout << val << " ";
	cout << endl;
	return 0;
}