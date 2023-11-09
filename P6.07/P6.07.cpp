#include <iostream>
#include <iomanip>
using namespace std;

void Nhap(int[], int&);
int LonNhat(int[], int);
int ThuHai(int[], int);
int Xuat(int[], int);

int main()
{
	int a[100];
	int n;
	Nhap(a, n);

	if (Xuat(a, n) == 1)
		cout << ThuHai(a, n);
	else
		cout << "0";
	return 0;
}

void Nhap(int a[], int& n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

int LonNhat(int a[], int n)
{
	int lc = a[0];
	for (int i = 0; i < n; i++)
		if (a[i] > lc)
			lc = a[i];
	return lc;
}

int ThuHai(int a[], int n)
{
	int b[100];
	int k = 0;
	int lc = LonNhat(a, n);
	for (int i = 0; i < n; i++)
	{
		if (a[i] != lc)
		{
			b[k] = a[i];
			k++;
		}
	}
	if (k == 0)
		return 0;
	int lth = LonNhat(b, k);
	return lth;
}

int Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == ThuHai(a, n))
			return 1;
	}
	return 0;
}