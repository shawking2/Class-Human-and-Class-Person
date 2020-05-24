#include "Human.h"

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
void Xuat(Human A) {
	cout << "Name: " << A.name << "\nAge: " << A.age << "\nSex: " << A.sex;

}