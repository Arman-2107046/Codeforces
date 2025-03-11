#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool checkHashH(string s, vector<int> &hashS)
{
    int n = s.size();

    vector<int> hashH(26, 0);
    for (int i = 0; i < n; i++)
    {
        hashH[s[i] - 'a']++;
    }

    bool result = true;

    for (int i = 0; i < 26; i++)
    {
        if (hashS[i] != hashH[i])
        {
            result = false;
            break;
        }
    }

    return result;
}

void print1Dvector(vector<int> arr)
{
    for (auto it : arr)
    {
        cout << it << " ";
    }
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        string s, h;
        cin >> s >> h;

        // cout<<s<<" "<<h<<endl;

        int n = s.size();
        int m = h.size();

        vector<int> hashS(26, 0);
        // vector<int> hashH(26, 0);

        for (int i = 0; i < n; i++)
        {
            hashS[s[i] - 'a']++;
        }
        // print1Dvector(hashS);

        // if (m == n)
        // {
        //     if (checkHashH(h, hashS))
        //     {
        //         cout << "YES" << endl;
        //     }
        //     else
        //     {
        //         cout << "NO" << endl;
        //     }
        //     continue;
        // }

        if (m < n)
        {
            cout << "NO" << endl;
            continue;
        }
        string ans = "NO";
        for (int i = 0; i < (m - n + 1); i++)
        {
            string subStr = h.substr(i, n);

            // cout << subStr << endl;

            if (checkHashH(subStr, hashS) == true)
            {
                ans = "YES";
            }
        }

        cout << ans << endl;
    }
}