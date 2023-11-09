#include<iostream>
#define MAXR 100
#define MAXC 100
using namespace std;

void NhapMaTran(float[][100], int&, int&);
void Xuat(float[][100], int, int);
void TichMaTran(float[][100], int, int, float[][100], int, float[][100]);

int main() {
	float a[MAXR][MAXC];
	int m, n;
	NhapMaTran(a, m, n);

	int k;
	float b[MAXR][MAXC];
	NhapMaTran(b, n, k);

	float c[MAXR][MAXC];
	TichMaTran(a, m, n, b, k, c);

	Xuat(c, m, k);
	return 0;
}

void NhapMaTran(float a[][100], int& m, int& n)
{
	cin >> m >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}

void Xuat(float a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}

void TichMaTran(float a[][100], int m, int n, float b[][100], int k, float c[][100])
{
	for (int i = 0; i < m; i++)
		for (int l = 0; l < k; l++)
			c[i][l] = 0;
	for (int i = 0; i < m; i++)
		for (int l = 0; l < k; l++)
			for (int j = 0; j < n; j++)
				c[i][l] += a[i][j] * b[j][l];
}