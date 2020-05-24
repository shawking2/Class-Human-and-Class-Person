#pragma once
#include <iostream>
using namespace std;

class Human
{
private:
	string name;
	int age;
	string sex;
public:
	Human();
	Human(string Nam, int Age, string Sex);
	friend void Xuat(Human A);
};

