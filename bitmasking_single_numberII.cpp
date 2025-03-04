#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main()
{
    vector<int> arr = {5, 5, 5, 6, 4, 4, 4};
    // 101
    // 101
    // 101
    // 110
    // 100
    // 100
    // 100

    int n = arr.size();
    vector<int> Occurrences(32);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 32; j++)
        {
            if (arr[i] & (1 << j))
            {
                Occurrences[j]++;
            }
        }
    }
    for (auto it : Occurrences)
    {
        cout << it << " ";
    }
    cout << endl;
    // reconstructing the number
    int ans = 0;
    for (int i = 0; i < 32; i++)
    {
        if ((Occurrences[i] % 3) == 1)
        {
            ans = ans | (1 << i);
        }
    }

    cout << ans;
}