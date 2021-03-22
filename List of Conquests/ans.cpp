#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        map<string, int> country;
        map<string, int>::iterator it;
        string s;
        getline(cin, s);
        while (n--)
        {
            getline(cin, s);
            s = s.substr(0, s.find(" "));
            it = country.find(s);
            if (it == country.end())
            {
                country[s] = 1;
            }
            else
            {
                country[s]++;
            }
        }
        for (auto i = country.begin(); i != country.end(); i++)
        {
            cout << i->first << " " << i->second << endl;
        }
    }
    return 0;
}
