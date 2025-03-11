#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        // cout<<s<<endl;

        string s1 = s.substr(0, n / 2);
        string s2 = s.substr(n / 2, n / 2);

        reverse(s2.begin(), s2.end());
        // cout<<s1<<" "<<s2<<endl;

        string ans = "YES";

        for (int i = 0; i < n / 2; i++)
        {
            if (abs((s1[i] - 'a') - (s2[i] - 'a')) !=2 && abs((s1[i] - 'a') - (s2[i] - 'a')) !=0)
            {
                ans = "NO";
                break;
            }
        }

        cout << ans << endl;
    }
}
