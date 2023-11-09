#include <iostream>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void XuLy(int[], int&, int&, int&);

int main()
{
	int b[500], k;
	int x, l;

	Nhap(b, k);
	XuLy(b, k, x, l);
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
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}

void XuLy(int a[], int& n, int& xx, int& vt)
{
	cin >> xx;
	cin >> vt;
	for (int i = n - 1; i >= vt; i--)
		a[i + 1] = a[i];
	a[vt] = xx;
	n++;
}