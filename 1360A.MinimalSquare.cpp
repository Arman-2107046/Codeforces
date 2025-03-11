#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{

    ll t;
    cin>>t;

    while(t--)
    {
        ll a,b;
        cin>>a>>b;

        ll height=min(a,b);
        ll width=max(a,b);

        if(height*2>width)
        {
            cout<<(height*2)*(height*2)<<endl;
        }
        else
        {
            cout<<width*width<<endl;
        }







    }








}