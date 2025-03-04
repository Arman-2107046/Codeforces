#include <bits/stdc++.h>
using namespace std;
#define ll long long

int findOdd(vector<int> &arr)
{
    
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] % 2 != 0)
        {
            return i+1;
        }
    }
}
int findEven(vector<int> &arr)
{

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] % 2 == 0)
        {
            return i+1;
        }
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int evenCount = 0;
    int oddCount = 0;

    for(int i=0;i<3;i++)
    {
        if(arr[i]%2==0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }

    if(evenCount>oddCount)
    {
        cout<<findOdd(arr);
    }
    else
    {
        cout<<findEven(arr);
    }
}