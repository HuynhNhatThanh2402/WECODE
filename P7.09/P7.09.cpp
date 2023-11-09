#include <iostream>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int, float[][100], int, int);

int main()
{
	float b[100][100];
	float c[100][100];
	int k, l, t, g;
	Nhap(b, k, l);
	Nhap(c, t, g);
	Xuat(b, k, l, c, t, g);
	return 0;
}

void Nhap(float a[][100], int& m, int& n)
{
	cin >> m;
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}

void Xuat(float b[][100], int k, int l, float c[][100], int t, int g)
{
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < l; j++)
			cout << b[i][j] + c[i][j] << " ";
		cout << endl;
	}
}