#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool checkOddSum(vector<int> &arr)
{
    int sum = 0;
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    return sum % 2 == 1;
}

bool everyOdd(vector<int>&arr)
{
    int n=arr.size();

    bool ans=true;

    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            ans=false;
        }
    }

    return ans;
}

bool everyEven(vector<int>&arr)
{
    int n=arr.size();

    bool ans=true;

    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==1)
        {
            ans=false;
        }
    }

    return ans;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin>>n;

        vector<int>arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        if(checkOddSum(arr))
        {
            cout<<"YES"<<endl;
            continue;
        }

        if(n%2==0)
        {
            if(everyEven(arr)==true || everyOdd(arr)==true)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
            continue;
        }

        if(n%2==1)
        {
            if(everyEven(arr)==true)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
            continue;
        }

    }
}