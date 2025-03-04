#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

    vector<int> arr = {1, 2, 3};
    int n = arr.size();

    int subsets = (1 << n);
    // cout<<subsets<<endl;

    vector<vector<int>> ans;

    for (int i = 0; i < subsets; i++)
    {
        vector<int> list;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                list.push_back(arr[j]);
            }
        }
        ans.push_back(list);
    }

    for (auto it : ans)
    {
        for (auto itt : it)
        {
            cout << itt << " ";
        }
        cout << endl;
    }
}