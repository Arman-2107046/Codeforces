#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll badPosOdd(vector<ll> &arr)
{
    ll ans = 0;

    for (ll i = 0; i < arr.size(); i++)
    {
        if (i % 2 == 1 && arr[i] % 2==0)
        {
            ans++;
        }
    }

    return ans;
}
ll badPosEven(vector<ll> &arr)
{
    ll ans = 0;

    for (ll i = 0; i < arr.size(); i++)
    {
        if (i % 2 == 0 && arr[i] % 2==1)
        {
            ans++;
        }
    }

    return ans;
}

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        // cout<<n<<endl;

        vector<ll> arr(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        // for(auto it:arr){
        //     cout<<it<<" ";

        // }

        ll badPosCount = badPosOdd(arr)+badPosEven(arr);

        // cout<<badPosCount<<endl;

        if (badPosOdd(arr)==badPosEven(arr))
        {
            cout << badPosCount / 2 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}