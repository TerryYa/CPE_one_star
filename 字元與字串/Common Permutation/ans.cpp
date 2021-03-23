#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string a, b;
    while (cin >> a >> b)
    {
        string same = string();
        for (int i = 0; i < a.length(); i++)
        {
            for (int j = 0; j < b.length(); j++)
            {
                if (a[i] == b[j])
                {
                    same += a[i];
                    b[j] = '@';
                    break;
                }
            }
        }
        sort(same.begin(), same.end());
        cout << same << endl;
    }
    return 0;
}
