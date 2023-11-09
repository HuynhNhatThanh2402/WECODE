#include <iostream>
using namespace std;

void Nhap(int[], int&);
int LonNhat(int[], int);
int DemLonNhat(int[], int);

int main()
{
    int b[100];
    int k;
    Nhap(b, k);

    cout << LonNhat(b, k) << "\n\n";
    cout << DemLonNhat(b, k);

    return 0;
}

void Nhap(int a[], int& n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

int LonNhat(int a[], int n)
{
    int lc = a[0];
    for (int i = 0; i < n; i++)
        if (a[i] > lc)
            lc = a[i];
    return lc;
}

int DemLonNhat(int a[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
        if (a[i] == LonNhat(a, n))
            dem++;
    return dem;
}