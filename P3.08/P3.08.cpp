#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int s = 0;
	int k = n;
	while (k != 0)
	{
		int dv = k % 10;
		s = s + dv;
		k = k / 10;
	}
	cout << s;
}