#include<iostream>
using namespace std;
int main()
{
	char a, b;
	cin >> a >> b;
	int x;
	cin >> x;
	cout << "Ma ASCII cua ky tu '" << a << "', '" << b << "' lan luot la " << int(a) << " va " << int(b) << endl;
	cout << "Khoang cach giua hai ky tu '" << a << "', '" << b << "' la " << abs(int(a) - int(b)) << endl;
	cout << "Dang viet hoa cua ky tu '" << a << "' la '" << char(int(a) - 32) << "'" << endl;
	cout << x << " la ma ASCII cua ky tu '" << char(x) << "'";
	return 0;
}