#include <iostream>
#include <iomanip>
using namespace std;

void XoaMang(int[], int&, int, int);
void NhapMang(int[], int&);
void XuatMang(int[], int);

int main()
{
	int a[100];
	int n;
	int p, k;
	NhapMang(a, n);

	cin >> p >> k;

	XoaMang(a, n, p, k);

	XuatMang(a, n);
	return 0;
}

void NhapMang(int a[], int& n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

void XoaMang(int a[], int& n, int p, int k)
{
	for (int i = p; i < n; i++)
		a[i] = a[i + k];
	n = n - k;
}

void XuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}