#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

ll n,m;
cin>>n>>m;


vector<ll>arr(m);
for(ll i=0;i<m;i++)
{
    cin>>arr[i];
}

sort(arr.begin(),arr.end());

if(n==m)
{
    cout<<arr[m-1]-arr[0];
    return 0;
}

ll minDiff=1e9;

for(int i=0;i<=(m-n);i++)
{
minDiff=min(minDiff,arr[i+n-1]-arr[i]);
}

cout<<minDiff;


}