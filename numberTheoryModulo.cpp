#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back


int main()
{
int M=47;

ll n;
cin>>n;

ll fact=1;

for(int i=2;i<=n;i++)
{
    fact=(fact*i)%M;
}

cout<<fact<<endl;



}