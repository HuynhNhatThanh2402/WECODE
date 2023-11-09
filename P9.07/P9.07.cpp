#include <iostream>
using namespace std;

void Nhap(float[][100], int&, int&);
void Xuat(float[][100], int, int);

int main()
{
	float b[100][100];
	int k, l;

	Nhap(b, k, l);
	Xuat(b, k, l);
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

void Xuat(float a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}