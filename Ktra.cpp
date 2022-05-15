#include <iostream>

using namespace std;

void Bai1() {
	cout << "---------------------" << endl;
	cout << "Bai 1: \nKiem tra 2 so ban be" << endl;
	int a, b;
	int Uoc_A = 0, Uoc_B = 0;
	cout << "\nNhap 2 so a, b: " << endl;
	cin >> a >> b;
	//Tao vong lap for kiem tra tat ca cac so tu 1 den a,
	//So nao la Uoc ta cong vao Uoc_A
	for (int i = 1; i < a; i++) {
		if (a % i == 0) {
			Uoc_A += i;
		}
	}
	//Tao vong lap for kiem tra tat ca cac so tu 1 den b,
	//So nao la Uoc ta cong vao Uoc_B
	for (int i = 1; i < b; i++) {
		if (b % i == 0) {
			Uoc_B += i;
		}
	}

	//So sanh Uoc_A voi b va Uoc_B voi A, neu bang nhau, do la 2 so ban be, va nguoc lai
	if (Uoc_A == b && Uoc_B == a) {
		cout << "Hai so " << a << " va " << b << " la 2 so ban be!" << endl;
	}
	else {
		cout<< "Hai so " << a << " va " << b << " KHONG phai la 2 so ban be!" << endl;
	}
}

int tim_soDaoNguoc(int n) {
	int soDaoNguoc = 0;
	//O lan lap dau tien ta co hang don vi, lan 2 la hang chuc, va lan luot nhu vay
	//CHo den khi lay duoc so dao nguoc cua so ban dau
	while (n > 0) {
		soDaoNguoc = soDaoNguoc * 10 + n % 10;
		n /= 10;
	}
	return soDaoNguoc;
}

void Bai2() {
	cout << "---------------------" << endl;
	cout << "Bai 2: \nKiem tra so doi xung." << endl;
	int n;
	cout << "\nNhap so nguyen duong n: "; cin >> n;
	//So sanh so ban dau voi so dao nguoc tim duoc
	if (n == tim_soDaoNguoc(n)) {
		cout << "\n\t" << n << " la so doi xung!" << endl;
	}
	else {
		cout << "\n\t" << n << " KHONG PHAI la so doi xung!" << endl;
	}
}

int main() 
{
	Bai1();
	Bai2();
	return 0;
}