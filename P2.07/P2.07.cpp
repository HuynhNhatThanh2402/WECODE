#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	float denta = b * b - 4 * a * c;
	if (denta < 0)
		cout << "PTVN";
	else
		if (denta > 0)
		{
			cout << "PT co hai nghiem phan biet:" << endl << endl;
			cout << "x1 = " << (-b + sqrt(denta)) / (2 * a) << endl << endl;
			cout << "x2 = " << (-b - sqrt(denta)) / (2 * a);
		}
		else
			cout << "PT co nghiem kep: x1 = x2 = " << (float)(-b) / (2 * a);
	return 0;
}