#include "Human.h"
#include "Person.h"

using namespace std;

int main() {
	Human A;
	Person B;
	cout << "\nNhap 1 -> Neu muon nhap thong tin Human";
	cout << endl << "Nhap 2 -> Neu muon nhap thong tin Person" << endl;
	int temp;
	cin >> temp;
	if (temp == 1) {
		A.Nhap();
		Xuat(A);
		return 0;
	}
	else {
		B.Nhap();
		Xuat(B);
		return 0;
	}
}