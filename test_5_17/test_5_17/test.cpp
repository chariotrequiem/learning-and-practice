#include<iostream>
using namespace std;

#include<string>

int main()
{
	//cout << "Enter two numbers:";
	//int v1, v2;
	//cin >> v1 >> v2;
	//cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << endl;

	string s1;
	string s2 = s1;
	string s3 = "hello world";
	cout << s3 << endl;
	string s4(s3);
	cout << s4 << endl;
	/*string s5 = (10,'c');*/
	/*cout << s5;*/
	string s4(10, 'a');         
	cout << "s4 = " << s4 << endl;

	return 0;

}