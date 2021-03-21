#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        while (--n)
        {
            int m, res = 0, arr[500] = {0};
            cin >> m;
            for (int i = 0; i < m; i++)
            {
                cin >> arr[i];
            }
            sort(arr, arr + m);
            int mdi = arr[int(m / 2)];
            for (int i = 0; i < m; i++)
            {
                res = res + abs(arr[i] - mdi);
            }
            cout << res << endl;
        }
    }
    return 0;
}