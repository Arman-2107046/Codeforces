#include <bits/stdc++.h>
using namespace std;


void findSubstrings(string s, vector<string> &ans)
{


    int n = s.size();

    for (int i = 0; i < n; i++)
    {
        string temp = "";

        for (int j = i; j < n; j++)
        {
            temp += s[j];
            // xorSum
            ans.push_back(temp);
        }
    }
}

int main()
{
    string s = "10111";
    int n = s.size();

    vector<string> ans;
    findSubstrings(s, ans);

    for (auto it : ans)
    {
        cout << it << endl;
    }
}