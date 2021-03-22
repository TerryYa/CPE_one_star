#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        string s;
        int max = 0, arr[26] = {0};
        getchar();
        while (n--)
        {
            getline(cin, s);
            for (int i = 0; i < s.length(); i++)
            {
                s[i] = toupper(s[i]);
                if (s[i] >= 'A' && s[i] <= 'Z')
                {
                    arr[s[i] - 'A']++;
                    if (max < arr[s[i] - 'A'])
                        max = arr[s[i] - 'A'];
                }
            }
        }

        while (max)
        {
            for (char i = 0; i < 26; i++)
            {
                if (arr[i] == max)
                {
                    cout << char('A' + i) << " " << arr[i] << endl;
                }
            }
            max--;
        }
    }
    return 0;
}