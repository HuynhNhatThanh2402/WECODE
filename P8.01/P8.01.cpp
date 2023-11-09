bool KiemTraHopLe(char[]);

int main()
{
	char s[MAX];
	cin.getline(s, MAX);
	if (KiemTraHopLe(s))
		cout << s;
	else
		cout << "CHUOI KHONG HOP LE.";
	return 0;
}

bool KiemTraHopLe(char a[])
{
	for (int i = 0; a[i] != NULL; i++)
		if ((a[i] >= '0') && (a[i] <= '9'))
			return false;
	return true;
}