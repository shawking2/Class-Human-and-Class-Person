#include "Person.h"
#include <string>

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
	cout << endl << "Tong tin cua Person: " << endl;
	cout << "Name: " << A.name << "\nAge: " << A.age << "\nSex: " << A.sex << "\nAddress: " << A.address << "\nPhone: " << A.phone;
}
void Person::Nhap() {
	cin.ignore();
	cout << "\nNhap ten: ";
	getline(cin, name);
	cout << "\nNhap tuoi: ";
	cin >> age;
	cout << "\nNhap gioi tinh: ";
	cin.ignore();
	getline(cin, sex);
	cout << "\nNhap dia chi: ";
	getline(cin, address);
	cout << "\nNhap so dien thoai: ";
	getline(cin, phone);
}
Person::~Person() {

}