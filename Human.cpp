#include "Human.h"
#include <string>
Human::Human() {
	name = "Bon Con Bo";
	age = 19;
	sex = "Nam";
}
Human::Human(string Name, int Age, string Sex) {
	name = Name;
	age = Age;
	sex = Sex;
}
void Human::Nhap() {
	cin.ignore();
	cout << "\nNhap ten: ";
	getline(cin, name);
	cout << "\nNhap tuoi: ";
	cin >> age;
	cin.ignore();
	cout << "\nNhap gio tinh: ";
	getline(cin, sex);
}
void Xuat(Human A) {
	cout << endl << "Tong tin cua Human: " << endl;
	cout << "Name: " << A.name << "\nAge: " << A.age << "\nSex: " << A.sex;

}
Human::~Human() {

}