#include <iostream>

using namespace std;

int main()
{
    unsigned int a, b;
    while (cin >> a >> b)
    {
        if (!(a||b))
        {
            break;
        }
        int n_carry = 0, carry = 0;
        while (a || b || carry)
        {
            int aa = a % 10, bb = b % 10;
            a /= 10;
            b /= 10;
            if ((aa + bb + carry) >= 10)
            {
                carry = 1;
                n_carry++;
            }
            else
            {
                carry = 0;
            }
        }
        switch(n_carry){
			case 0:
			cout << "No carry operation." << endl;
			break;
			case 1:
			cout << "1 carry operation." << endl;
			break;
			default:
			cout << n_carry << " carry operations." << endl;
		}
    }
    return 0;
}