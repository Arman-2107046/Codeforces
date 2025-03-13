#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        if (n == 1)
        {
            cout << k << endl;
        }
        else if (n == k)
        {
            cout << 1 << endl;
        }
        else if (n < k)
        {
            ll a = k / n;
            ll b = k % n;
            if (b != 0)
                a++;
            cout << a << endl;
        }
        else if (n > k)
        {
            ll div = n / k;
            if (n % k != 0)
                div++;

            // cout<<div<<endl;
            ll main = div * k;
            ll a = main / n;
            ll b = main % n;
            if (b != 0)
                a++;
            cout << a << endl;
        }
    }
}