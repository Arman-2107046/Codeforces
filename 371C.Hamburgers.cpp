#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

    string s;
    cin >> s;
    int n = s.size();

    ll nb, ns, nc;
    cin >> nb >> ns >> nc;

    ll pb, ps, pc;
    cin >> pb >> ps >> pc;

    ll givenMoney;
    cin >> givenMoney;

    ll rb, rs, rc;
    rb = rs = rc = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'B')
            rb++;
        else if (s[i] == 'S')
            rs++;
        else
            rc++;
    }
    ll ans = 0;

    ll st = 0;
    ll ed = 1e15;
    ll mid = 0;
    while (st <= ed)
    {
        mid = (st + ed) / 2;

        ll x = max(0ll, rb * mid - nb);
        ll y = max(0ll, rs * mid - ns);
        ll z = max(0ll, rc * mid - nc);

        ll requiredMoney = x * pb + y * ps + z * pc;

        if (requiredMoney > givenMoney)
        {
            ed = mid - 1;
        }
        else
        {
            ans = mid;
            st = mid + 1;
        }
    }

    cout << ans << endl;
}