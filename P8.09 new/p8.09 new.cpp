int myStrcmp(char s1[], char s2[])
{
	int m = 0;
	while (s1[m] != '\n')
		m++;
	int n = 0;
	while (s2[n] != '\n')
		n++;
	int a = m;
	int b = n;
	if (m > n)
		swap(m, n);
	for (int i = 0; i < m; i++)
	{
		if (int(s1[i]) > int(s2[i]))
			return 1;
		else
			if (int(s1[i]) < int(s2[i]))
				return -1;
	}
	if (a > b)
		return 1;
	if (a < b)
		return -1;
	return 0;
}