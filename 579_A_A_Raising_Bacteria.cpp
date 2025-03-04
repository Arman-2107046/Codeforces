#include <bits/stdc++.h>
using namespace std;

#define ll long long

void print1Darray(vector<int> arr)
{
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
}

void print2Darray(vector<vector<int>> arr)
{
    for (auto it : arr)
    {
        for (auto itt : it)
        {
            cout << itt << " ";
        }
        cout << endl;
    }
}



int main()
{

    ll n;
    cin >> n;

    ll ans = 0;

    while(n)
    {
        n=n&(n-1);
        ans++;
    }

    cout<<ans;

}
