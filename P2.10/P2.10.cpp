#include <iostream>
#include <cmath>
using namespace std;

bool ktNhuan(int, int, int);
int SoNgayToiDaTrongThang(int, int, int);

int main()
{
	int a;
	cin >> a;

	int b;
	cin >> b;

	int c;
	cin >> c;

	if (c <= 0)
	{
		cout << "Nam khong hop le.";
		return 0;
	}
	if (b > 12 || b < 1)
	{
		cout << "Thang khong hop le.";
		return 0;
	}
	if (a > SoNgayToiDaTrongThang(a, b, c) || a < 1)
	{
		cout << a << "/" << b << "/" << c << " la ngay khong hop le.";
		return 0;
	}
	else
	{
		cout << a << "/" << b << "/" << c << " la ngay hop le.";
		return 0;
	}
	return 0;
}

bool ktNhuan(int a, int b, int c)
{
	if (c % 4 == 0 && c % 100 != 0)
		return true;
	if (c % 400 == 0)
		return true;
	return false;
}

int SoNgayToiDaTrongThang(int a, int b, int c)
{
	int m[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (ktNhuan(a, b, c) == true)
		m[1] = 29;
	return m[b - 1];
}