#include <iostream>

using namespace std;

int func(int n)
{
    if (!(n / 10))
        return n;
    int res = 0;
    while (n)
    {
        res += n % 10;
        n /= 10;
    }
    return func(res);
}

int main()
{
    int n;
    while (cin >> n)
    {
        if (n)
            cout << func(n) << endl;
        else break;
    }
    return 0;
}