#include<iostream>
using namespace std;
#include<set>

//setÈİÆ÷ - ²åÈëºÍÉ¾³ı
void printSet(const set<int> &s)
{
	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01() 
{
	set<int>s;
	s.insert(30);
	s.insert(10);
	s.insert(20);
	s.insert(40);
	//±éÀú
	printSet(s);

	//É¾³ı - erase
	s.erase(s.begin());
	printSet(s);
    
	//É¾³ıÖØÔØ°æ±¾
	s.erase(30);
	printSet(s);

	//Çå¿Õ - clear
	//s.erase(s.begin(), s.end());
	s.clear();
	printSet(s);
}
int main()
{
	test01();
	return 0;
}