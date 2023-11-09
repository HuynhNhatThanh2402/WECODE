using namespace std;

int reverse(int);
int reverse(int n)
{
	int dv;
	int dn = 0;
	while (n != 0)
	{
		dv = n % 10;
		dn = dn * 10 + dv;
		n = n / 10;
	}
	return dn;
}