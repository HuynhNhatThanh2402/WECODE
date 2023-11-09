using namespace std;

int reverse(int);
int dn = 0;
int reverse(int n)
{
	if (n == 0)
		return dn;
	dn = dn * 10 + n % 10;
	n = n / 10;
	return reverse(n);
}