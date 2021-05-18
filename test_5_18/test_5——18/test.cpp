#include<iostream>
using namespace std;
#include<string>

int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	cout << s1 << s2 << endl;

	return 0;
}

int main()
{
	string word;
	while (cin >> word)
	{
		cout << word << endl;
	}
	return 0;
}

int main()
{
	string line;
	while (getline(cin, line))
	{
		cout << line << endl;
	}
	//cin >> line;
	//string s1 = getline(line);
	return 0;
}

int main()
{
	string line;
	while (getline(cin, line))
	{
		if (!line.empty())
			cout << line << endl;
	}
	return 0;
}

int main()
{
	string line;
	while (getline(cin, line))
		if (line.size() > 10)
			cout << line << endl;
	return 0;
}

int main()
{
	string s1 = "hello ";
	string s2 = "world";
	string s3 = s1 + s2;
	cout << s3 << endl;
	return 0;
}

int main()
{
	string s1 = "hello", s2 = "world";
	string s3 = s1 + "," + s2 + '\n';
	cout << s3;
	string s4 = s1 + ",";
	cout << s4;
	//错误，两个运算对象至少有一个应该是string类型
	//string s5 = "hello" + ",";
	return 0;
}

int main()
{
	string line;
	while (getline(cin, line))
		cout << line << endl;
	return 0;
}
int main()
{
	string s1;
	while (!(cin >> s1))
	{
		cin >> s1;
		cout << s1;

	}
	return 0;
}

int main()
{
	string s1;
	string s2;
	cin >> s1;
	cin >> s2;
	if (s1 == s2)
	{
		cout << "两字符串相等" << endl;
	}
	else if (s1 > s2)
	{
		cout << "较大字符串为：" << s1 << endl;
	}
	else
	{
		cout << "较大字符串为：" << s2 << endl;

	}
	return 0;
}

int main()
{
	string s1;
	string s2;
	cin >> s1;
	cin >> s2;
	if (s1.size() == s2.size())
	{
		cout << "两字符串等长" << endl;
	}
	else if (s1.size() > s2.size())
	{
		cout << s1;
	}
	else
	{
		cout << s2;
	}
	return 0;
}

int main()
{
	string s1, s2, s3;
	cin >> s1;
	cin >> s2;
	cin >> s3;
	string s;
	s1 += " " + s2 + " " + s3;
	cout << s1;
	return 0;
}

int main()
{
	string str("some string !");
	for (auto c : str)
		cout << c << endl;

}


int main()
{
	string s("hello world!!!");
	decltype(s.size()) punct_cnt = 0;
	for (auto c : s)
		if (ispunct(c))
			++punct_cnt;
	cout << punct_cnt << " punctuation characters in " << s << endl;
	return 0;
}

int main()
{
	string s("hello world");
	for (auto &c : s)
		c = toupper(c);
	cout << s << endl;
	return 0;
}

int main()
{
	string s("hello world");
	if (!s.empty())
		cout << s[0] << endl;
	return 0;
}

int main()
{
	string s("hello world");
	//if (!s.empty())
	//	s[0] = toupper(s[0]);
	//cout << s[0] << endl;
	for (decltype (s.size()) index = 0; index != s.size() && !isspace(s[index]); ++index)
		s[index] = toupper(s[index]);
	cout << s;
	
	return 0;
}

int main()
{
	string s("hello world");
	for (decltype(s.size()) index = 0; index != s.size(); index++)
		s[index] = 'x';
	cout << s << endl;

}