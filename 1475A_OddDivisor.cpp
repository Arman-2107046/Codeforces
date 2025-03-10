#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        if (n % 2 != 0)
        {
            cout << "YES" << endl;
            continue;
        }

        while (1)
        {
            if (n % 2 == 0)
            {
                n = n / 2;
            }
            else
            {
                break;
            }
        }

        if (n == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}