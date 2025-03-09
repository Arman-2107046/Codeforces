#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back

int main()
{
    ll n;
    cin >> n;

    ll count = 0;

    vector<vector<ll>> arr(n, vector<ll>(2));

    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }

    // for(auto it:arr)
    // {
    //     for(auto itt:it)
    //     {
    //         cout<<itt<<" ";
    //     }
    //         cout<<endl;
    // }

    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            if (arr[i][0] == arr[j][1])
            {
                count++;
            }
        }
    }

    cout << count << endl;
}
