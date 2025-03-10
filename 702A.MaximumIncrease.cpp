#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void print1dVector(vector<ll> arr)
{
    for (ll i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    ll n;
    cin >> n;

    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (n == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    // print1dVector(arr);

    ll currLength = 1;
    ll maxlength = INT_MIN;

    for (ll i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] > arr[i])
        {
            currLength++;
        }
        else
        {
            currLength = 1;
        }

        maxlength = max(maxlength, currLength);
    }

    cout << maxlength << endl;
}
