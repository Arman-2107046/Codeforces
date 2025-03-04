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

long long binSearch(vector<int> &arr, long long target)
{
    int left = 0;
    int right = arr.size() - 1;

    // Binary search for the first element greater than the target
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] <= target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    // Return the index of the first element greater than target
    // If no such element exists, return arr.size()
    return left;
}

int main()
{
    ll n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    ll q;
    cin >> q;

    ll count = 0;
    ll a;

    for (int i = 0; i < q; i++)
    {
        cin >> a;

        if (a >= arr[n - 1])
        {
            cout << n << endl;
            continue;
        }
        else if (a < arr[0])
        {
            cout << 0 << endl;
            continue;
        }
        else
        {
            cout << binSearch(arr, a) << endl;
        }
    }
}