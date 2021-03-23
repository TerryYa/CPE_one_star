#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s[101];
    int max_r = 0, max_c = 0;
    while (getline(cin, s[max_r]))
    {
        if (max_c < s[max_r].length()) max_c = s[max_r].length();
        max_r++;
    }  
    for (int i = 0; i < max_c; i++)
    {
        for (int j = max_r-1; j >= 0; j--)
        {
            if (s[j].length() > i)
                cout << s[j][i];
            else
                cout << ' ';
        }
        cout << endl;
    }
    return 0;
}