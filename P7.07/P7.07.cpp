#include <iostream>
using namespace std;

void Nhap(float[][100], int&, int&);
bool ktDoiXung(float[][100], int, int);

int main()
{
	float b[100][100];
	int k, l;

	Nhap(b, k, l);
	if (ktDoiXung(b, k, l))
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

bool ktDoiXung(float a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if ((a[i][j] != a[j][i]))
				return false;
	return true;
}