#include <iostream>

using namespace std;

int cycle_len(int n)
{
    int cnt = 1;
    while (n != 1)
    {
        cnt++;
        n = n % 2 ? 3 * n + 1 : n / 2;
    }
    return cnt;
}

int main()
{
    int a, b;
    while (cin >> a >> b)
    {
        cout << a << " " << b << " ";
        if (a > b)
        {
            int tmp = a;
            a = b;
            b = tmp;
        }
        int max = 0;
        for (int i = a; i <= b; i++)
        {
            int len_c = cycle_len(i);
            if (max < len_c)
            {
                max = len_c;
            }
        }
        cout << max << endl;
    }
    return 0;
}