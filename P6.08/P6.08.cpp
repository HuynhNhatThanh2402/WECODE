#include <iostream>
using namespace std;

void Nhap(int[], int&);
void Xuat(int[], int);
void XoaViTri(int[], int&, int);
void XuLy(int[], int&, int&);

int main()
{
	int b[500], k;
	int x;

	Nhap(b, k);
	XuLy(b, k, x);
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

void XoaViTri(int a[], int& n, int k)
{
	for (int i = k; i <= n - 2; i++)
		a[i] = a[i + 1];
	n--;
}

void XuLy(int a[], int& n, int& xx)
{
	cin >> xx;
	for (int i = n - 1; i >= 0; i--)
		if (a[i] == xx)
			XoaViTri(a, n, i);
}