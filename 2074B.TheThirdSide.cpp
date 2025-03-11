#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

    ll t;
    cin >> t;

    while (t--)
    {

        ll n;
        cin>>n;

        vector<ll> arr(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());
        reverse(arr.begin(), arr.end());

        if (arr.size() == 1)
        {
            cout << arr[0] << endl;
            continue;
        }

        while (arr.size() != 1)
        {

            ll x= arr[arr.size()-1]+arr[arr.size()-2]-1;
            arr.pop_back();
            arr.pop_back();
            arr.push_back(x);
        }

        cout<<arr[0]<<endl;
    }
}