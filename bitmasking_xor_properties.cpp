#include<bits/stdc++.h>
using namespace std;


int getXor(int n)
{
    if(n%4==0)
    {
        return n;
    }
    if(n%4==1)
    {
        return 1;
    }
    if(n%4==2)
    {
        return n+1;
    }
    if(n%4==3)
    {
        return 0;
    }
}

int main()
{

    int l=4,r=20;
    cout<<(getXor(r)^getXor(l-1));

}