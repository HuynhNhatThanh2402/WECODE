#include <iostream>
using namespace std;

void Nhap(float[][100], int&, int&);
float LonNhat(float[][100], int, int, int);
void LietKe(float[][100], int, int);

int main()
{
	float b[100][100];
	int k, l;
	Nhap(b, k, l);
	LietKe(b, k, l);
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

float LonNhat(float a[][100], int m, int n, int k)
{
	float lc = a[0][k];
	for (int i = 1; i < m; i++)
		if (a[i][k] > lc)
			lc = a[i][k];
	return lc;

}

void LietKe(float a[][100], int m, int n)
{
	for (int j = 0; j < n; j++)
		cout << "Gia tri lon nhat tren cot " << j << " la: " << LonNhat(a, m, n, j) << endl << endl << endl;
}