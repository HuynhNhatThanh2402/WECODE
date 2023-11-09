#include <iostream>
using namespace std;

void Nhap(float[][100], int&, int&);
float Trace(float[][100], int, int);

int main()
{
	float b[100][100];
	int k, l;

	Nhap(b, k, l);
	cout << Trace(b, k, l);

	return 0;
}

void Nhap(float a[][100], int& m, int& n)
{
	cin >> m >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}

float Trace(float a[][100], int m, int n)
{
	float tong = 0;
	for (int i = 0; i < m; i++)
		tong = tong + a[i][i];
	return tong;
}