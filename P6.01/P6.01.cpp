void Nhapmang(int[], int);
int ChuSoDau(int);
bool isBenford(int[], int);

void Nhapmang(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

bool isBenford(int a[], int n)
{
	int dem = 0;
	int demm = 0;
	for (int i = 0; i < n; i++)
	{
		if (ChuSoDau(a[i]) == 1)
			dem++;
		if (ChuSoDau(a[i]) == 4)
			demm++;
	}
	if ((dem == 3) && (demm == 1))
		return true;
	return false;
}

int ChuSoDau(int n)
{
	int dv;
	while (n != 0)
	{
		dv = n % 10;
		n = n / 10;
	}
	return dv;
}