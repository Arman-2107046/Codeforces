#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    string s;
    cin >> s;
    int n = s.length();

    int i = 0;

    while (i < n)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            s.erase(i, 3);
            s.insert(i, " ");
            continue;
        }
        i++;
    }

    int j = 0;
    while (j < s.length())
    {
        if (s[j]!= ' ')
        {
            break;
        }
        if (s[j] == ' ')
        {
            s.erase(j, 1);
            continue;
        }
        j++;
    }

    int k = s.length() - 1;
    while (k >= 0)
    {
        if (s[k] != ' ')
        {
            break;
        }
        if (s[k] == ' ')
        {
            s.erase(k, 1);
            continue;
        }
        k--;
    }

    int p = 0;
    while (p < s.length())
    {
        if (s[p] == ' ' && s[p + 1] == ' ')
        {
            s.erase(p, 1);
            continue;
        }
        p++;
    }

    cout << s;
}