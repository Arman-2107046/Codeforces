#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void print1dVector(vector<char> arr)
{
    for (ll i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    ll t;
    cin >> t;


    while(t--){
        ll n, x, k;
        cin >> n >> x >> k;
        string s;
        cin>>s;

        for(int i=0;i<n;i++)
        {
            if(s[i]=='L')
            {
                x--;
            }
            else
            {
                x++;
            }
            if(x==0)
            {
                break;
            }
        }

    }

}

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define pb push_back

// void print1dVector(vector<char> arr)
// {
//     for (ll i = 0; i < arr.size(); i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     ll t;
//     cin >> t;

//     while (t--)
//     {
//         ll n, x, k;
//         cin >> n >> x >> k;

//         vector<char> arr(n);
//         for (ll i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//         // print1dVector(arr);

//         ll count = 0;
//         ll i = 0;

//         while (k--)
//         {

//             if (arr[i % n] == 'L')
//             {
//                 x--;
//             }
//             if (arr[i % n] == 'R')
//             {
//                 x++;
//             }

//             if (x == 0)
//             {
//                 count++;
//                 i = 0;
//                 continue;
//             }

//             i++;
//         }

//         cout << count << endl;
//     }
// }
