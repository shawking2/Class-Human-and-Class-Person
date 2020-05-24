#pragma once
#include <iostream>

using namespace std;
class Person
{
private:
	string name;
	int age;
	string sex;
	string address;
	string phone;
public:
	Person();
	Person(string Name, int age, string Sex, string Address, string Phone);
	friend void Xuat(Person A);
};

