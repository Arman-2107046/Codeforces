#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        vector<ll> arr(3);

        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(),arr.end());

        if(arr[1]!=arr[2])
        {
            cout<<"NO"<<endl;
            continue;
        }
        else
        {
            cout<<"YES"<<endl;
            
            cout<<arr[0]<<" "<<arr[0]<<" "<<arr[2]<<endl;
            continue;
        }


    }
}