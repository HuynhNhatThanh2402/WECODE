#include <iostream>
using namespace std;

void Nhap(float[][100], int&, int&);
int ktCot(float[][100], int, int);
int ktKhac0(float[][100], int, int);
bool ktFrobenius(float[][100], int, int);

int main()
{
	float b[100][100];
	int k, l;

	Nhap(b, k, l);
	if (ktFrobenius(b, k, l))
		cout << "Yes";
	else
		cout << "No";

	return 0;
}

void Nhap(float a[][100], int& m, int& n)
{
	cin >> m >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}

int ktCot(float a[][100], int m, int n)
{
	int dem = 0;
	for (int j = 0; j < n; j++)
		for (int i = j + 1; i < m; i++)
		{
			if (a[i][j] != 0)
			{
				dem++;
				break;
			}
		}
	return dem;
}

int ktKhac0(float a[][100], int m, int n)
{
	for (int j = 0; j < n; j++)
		for (int i = 0; i < j; i++)
			if (a[i][j] != 0)
				return 0;
	return 1;
}

bool ktFrobenius(float a[][100], int m, int n)
{
	if (ktCot(a, m, n) > 1)
		return false;
	if (ktKhac0(a, m, n) == 0)
		return false;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			if ((a[i][i] != 1))
				return false;
		}
	return true;
}