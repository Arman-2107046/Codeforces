#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
ll k,l,m,n,d;
cin>>k>>l>>m>>n>>d;

if(k==1 || l==1 || m==1 || n==1)
{
    cout<<d<<endl;
    return 0;
}

vector<ll> arr(d+1,0);

for(int i=k;i<=d;i+=k)
{
    arr[i]=1;
}
for(int i=l;i<=d;i+=l)
{
    arr[i]=1;
}
for(int i=m;i<=d;i+=m)
{
    arr[i]=1;
}
for(int i=n;i<=d;i+=n)
{
    arr[i]=1;
}

int count=0;

for(int i=1;i<=d;i++)
{
    if(arr[i]==1)
    {
        count++;
    }
}
cout<<count<<endl;



}