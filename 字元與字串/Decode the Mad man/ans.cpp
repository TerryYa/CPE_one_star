#include <iostream>

using namespace std;

string keyboard = "`1234567890-=qwertyuiop[]\\asdfghjklasdfghjkl;'zxcvbnm,./";

int main()
{
    string s;
    while (getline(cin, s))
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != ' ' && s[i] != '\n')
                cout << keyboard[keyboard.find(s[i]) - 2];
            else
                cout << s[i];
        }
        cout << endl;
    }
    return 0;
}