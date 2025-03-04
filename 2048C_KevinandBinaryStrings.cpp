#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll findLeftMostZero(string &s)
{
    ll n = s.size();
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            return i;
        }
    }
    return -1;
}

ll findNoOfZeros(string &s, int position)
{
    ll n = s.size();
    ll count = 0;
    for (ll i = position; i < n; i++)
    {
        if (s[i] == '0')
        {
            count++;
        }
        if (s[i] == '1')
        {
            break;
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
        string s;
        cin >> s;
        ll n = s.size();

        if (findLeftMostZero(s) == -1)
        {
            cout << 1 << " " << n << " " << 1 << " " << 1 << endl;
            continue;
        }

        ll left = findLeftMostZero(s);

        ll newLength = n - left;

        ll nOz = findNoOfZeros(s, left);

        ll newLeft = left - nOz;
        if (newLeft < 0)
        {
            newLeft = 0;
        }

        cout << 1 << " " << n << " " << newLeft + 1 << " " << newLeft + newLength << endl;
    }
}
