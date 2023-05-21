#include <iostream>
#include <string>

using namespace std;

struct MyStruct
{
	string Name;
	void getName(string name) { Name = name; cout << Name; };
};

int main()
{
	string MyName;
	cout << "Printf you Name:";
	cin >> MyName;
	MyStruct* ms = new MyStruct;
	cout << "----------------------";
	ms->getName(MyName);
}
