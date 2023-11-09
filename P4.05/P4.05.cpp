using namespace std;
void input(int&);
int TongChuSo(int);
void input(int& n)
{
    cin >> n;
}
int TongChuSo(int n)
{
    int s = 0;
    while (n != 0)
    {
        s = s + (n % 10);
        n = n / 10;
    }
    return s;
}