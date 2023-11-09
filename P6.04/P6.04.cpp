#include <iostream>
using namespace std;

int SoNguyenTo(int);
int DemNguyenTo(int[], int);

int main()
{
	int n;
	cin >> n;
	int a[100];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
		if (SoNguyenTo(a[i]) == 1)
			cout << a[i] << " ";
	if (DemNguyenTo(a, n) == 0)
		cout << "\n\n0";
	return 0;
}

int SoNguyenTo(int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			dem++;
	if (dem == 2)
		return 1;
	return 0;
}

int DemNguyenTo(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (SoNguyenTo(a[i]))
			dem++;
	return dem;
}