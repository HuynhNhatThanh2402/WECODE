#include <iostream>
using namespace std;

int ktNguyenTo(int);

int main()
{
	int n;
	cin >> n;
	cout << ktNguyenTo(n);
	return 0;
}

int ktNguyenTo(int n)
{
	if (n == 1)
		return -1;
	int dem = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			dem++;
	if (dem == 2)
		return 1;
	return 0;
}