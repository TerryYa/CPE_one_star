#include <iostream>

using namespace std;

void Bangla(long long int n)
{
    if (!n)
        return;
    if (n / 10000000)
    {
        Bangla(n / 10000000);
        cout << " kuti";
        n %= 10000000;
    }
    if (n / 100000)
    {
        Bangla(n / 100000);
        cout << " lakh";
        n %= 100000;
    }
    if (n / 1000)
    {
        Bangla(n / 1000);
        cout << " hajar";
        n %= 1000;
    }
    if (n / 100)
    {
        Bangla(n / 100);
        cout << " shata";
        n %= 100;
    }
    if (n)
        cout << " " << n;
}

int main()
{
    long long int n;
    int cnt = 1;
    while (cin >> n)
    {
        cout << cnt++ << ".";
        if (n)
            Bangla(n);
        else
            cout << " 0";
        cout << endl;
    }
    return 0;
}