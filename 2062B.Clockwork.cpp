#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

// ll findSmallestIndex(vector<ll> arr, ll n)
// {
//     ll smallest = INT_MAX;
//     ll index = -1;
//     for (ll i = 0; i < n; i++)
//     {
//         if (arr[i] < smallest)
//         {
//             smallest = arr[i];
//             index = i;
//         }
//     }

//     return index;
// }

int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> arr(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        // ll pathWays = max(findSmallestIndex(arr, n) - 0, (n - 1) - findSmallestIndex(arr, n)) * 2;

        bool result = true;

        for (ll i = 0; i < n; i++)
        {
            ll pathWays = 2 * max(i - 0, (n - 1) - i);
            if (arr[i] <= pathWays)
            {
                result = false;
                break;
            }
        }

        if (result == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
