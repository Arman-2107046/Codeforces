#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll a, b;
        cin >> a >> b;

        ll count = 0;

        if (a == b)
        {
            cout << 0 << endl;
            continue;
        }

        else
        {
            ll diff = abs(b - a);

            for (ll i = 10; i > 0; i--)
            {
                count += diff / i;
                diff %= i;
            }
            cout << count << endl;
            continue;
        }

        // else if(a>b)
        // {
        //     for(ll i=10;i>0;i--)
        //     {
        //         count+=a/b;
        //         a=a%b;
        //     }
        //     cout<<count<<endl;
        //     continue;
        // }
    }
}