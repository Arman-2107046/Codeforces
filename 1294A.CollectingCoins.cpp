#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll a, b, c, n;
        cin >> a >> b >> c >> n;

        if ((a + b + c + n) % 3 == 0)
        {
            ll target = (a + b + c + n) / 3;
            if ((target - a) < 0 || (target - b) < 0 || (target - c) < 0)
            {
                cout << "NO" << endl;
            }
            else
            {

                cout << "YES" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}