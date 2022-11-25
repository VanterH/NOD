#include <iostream>
using namespace std;

int main()
{
    int n, a, b, nod = 0, max = 0;
    cin >> n;

    a = n / 2;
    b = n - a;

    for (a ;a >= 1 ; a--)
    {
        for (int i = 1; i <= b; i++) {
            if (a % i == 0 && b % i == 0) {
                nod = i;
            }
            if (nod > max)
            {
                max = nod;
            }
        }
        if (max > nod)
        {
            break;
        }
        b++;
    }

    cout << a + 1<< " " << b - 1;
}
