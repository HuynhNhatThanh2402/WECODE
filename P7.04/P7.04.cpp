#include <iostream>
using namespace std;

void Nhap(float[][100], int&, int&);
void XuatHoanVi(float[][100], int, int);

int main()
{
	float b[100][100];
	int k, l;

	Nhap(b, k, l);
	XuatHoanVi(b, k, l);

	return 0;
}

void Nhap(float a[][100], int& m, int& n)
{
	cin >> m >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}

void XuatHoanVi(float a[][100], int m, int n)
{
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < m; i++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}