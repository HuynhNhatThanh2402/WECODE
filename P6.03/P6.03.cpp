#include <iostream>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);

int main()
{
	int b[100], k;

	Nhap(b, k);
	Xuat(b, k);

	return 0;
}

void Nhap(int a[], int& n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

void Xuat(int a[], int n)
{
	for (int i = 1; i < n; i += 2)
		cout << a[i] << " ";
}