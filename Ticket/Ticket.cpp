#include <iostream>
using namespace std;

int Xuly(int);

int main()
{
	int n;
	cin >> n;

	int kq = 0;
	for (int i = 1000; i <= 9999; i++)
		if (Xuly(i) == n)
		{
			kq = i;
			break;
		}
	cout << kq;

	return 0;
}

int Xuly(int x)
{
	int s1 = (x % 10) + ((x % 100) / 10);
	int s2 = (x % 1000 / 100) + (x / 1000);
	int p1 = min(s1, s2);
	int p2 = max(s1, s2);

	if (p1 < 10)
		return p2 * 10 + p1;
	return p2 * 100 + p1;
}