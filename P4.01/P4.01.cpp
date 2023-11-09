int sum_even_divisor(int);
int Input();
int Input()
{
	int n;
	cin >> n;
	return n;
}
int  sum_even_divisor(int n)
{
	int s = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0 && i % 2 == 0)
			s = s + i;
	if (s == 0)
		return -1;
	return s;
}