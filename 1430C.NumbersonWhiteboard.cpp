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

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            arr[i] = i + 1;
        }

        int temp = n - 1;
        cout << 2 << endl;
        int i = 0;
        int newN = 0;
        while (temp--)
        {
            cout << arr[arr.size() - 1] << " " << arr[arr.size() - 2] << endl;
            newN = (arr[arr.size() - 1] + arr[arr.size() - 2] + 1) / 2;
            arr.pop_back();
            arr.pop_back();
            arr.push_back(newN);
        }
    }
}