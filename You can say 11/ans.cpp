#include <iostream>

using namespace std;

int main()
{
    string n = string();
    while (cin >> n)
    {
        if (n == "0")
            break;
        cout << n << " is ";
        int a = 0, b = 0;
        bool change = false;
        for (int i = 0; i < n.length(); i++){
            if (change){
                a += n[i]-'0';
            }else{
                b += n[i]-'0';
            }
            change = !change;
        }
        if (abs(a-b)%11)
        {
            cout << "not ";
        }
        cout << "a multiple of 11.\n";
    }
    return 0;
}