#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;

        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        if (n == 2)
        {
            cout << m << endl;
            continue;
        }
        if (n > 2)
        {
            cout << 2 * m << endl;
            continue;
        }
    }
}