#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {

        ll x, y, n;
        cin >> x >> y >> n;

        ll ans = n - n % x + y;

        if (ans <= n)
        {
            cout << ans << endl;
        }
        else
        {
            cout << ans - x << endl;
        }
    }
}