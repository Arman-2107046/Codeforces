#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {

        ll a, b, c;
        cin >> a >> b >> c;

        ll sum = a + b + c;

        ll k = sum / 9;

        if (sum % 9 == 0)
        {
            if (k <= a && k <= b && k <= c)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}