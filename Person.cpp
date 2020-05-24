#include "Person.h"

Person::Person() {
	name = "Higgs";
	age = 20;
	sex = "Nu";
	address = "Viet Nam";
	phone = "123456789";
}
Person::Person(string Name, int Age, string Sex, string Address, string Phone) {
	name = Name;
	age = Age;
	sex = Sex;
	address = Address;
	phone = Phone;
}
void Xuat(Person A) {
	cout << "Name: " << A.name << "\nAge: " << A.age << "\nSex: " << A.sex << "\nAddress: " << A.address << "\nPhone: " << A.phone;
}
