#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll returnUnique(vector<ll> &arr)
{
    int count = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != arr[i + 1])
        {
            count++;
        }
    }
    return count;
}

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        string s;
        cin >> s;

        ll left = 0;
        ll right = 0;

        ll largestLeft = INT_MIN;
        ll largestRight = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '<')
            {
                left++;
            }

            else
            {
                left = 0;
            }
            largestLeft = max(largestLeft, left);
        }

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '>')
            {
                right++;
            }

            else
            {
                right = 0;
            }
            largestRight = max(largestRight, right);
        }

        cout<<max(largestLeft,largestRight)+1<<endl;
    }
}