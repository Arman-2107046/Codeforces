#include <bits/stdc++.h>
using namespace std;
#define long long int

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        double n, m;
        cin >> n >> m;

        double sq = n * m;

        int ans = ceil(sq / 2.0);
        cout << ans << endl;
    }
}