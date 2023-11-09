#include <iostream>
#define MAXR 100
#define MAXC 100

void NhapMaTran(int[][100], int&);
bool isMaTranDonVi(int[][100], int);

void NhapMaTran(int a[][100], int& n)
{
	std::cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			std::cin >> a[i][j];
}

bool isMaTranDonVi(int a[][100], int n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			if (a[i][i] != 1)
				return false;
			if ((j != i) && (a[i][j] != 0))
				return false;
		}
	return true;
}