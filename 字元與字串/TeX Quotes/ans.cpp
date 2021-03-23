#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    bool flag = true;
    char c;
    while (scanf("%c", &c)!=EOF)
    {
        if (c == '"')
        {
            if (flag)
                cout << "``";
            else
                cout << "''";
            flag = !flag;
        }
        else cout << c;
    }
    return 0;
}