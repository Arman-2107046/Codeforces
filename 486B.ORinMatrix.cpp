#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll m, n;
    cin >> m >> n;

    vector<vector<ll>> matA(m, vector<ll>(n,1));
    vector<vector<ll>> matB(m, vector<ll>(n));

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matB[i][j];
            if (matB[i][j] == 0)
            {
                for (int k = 0; k < n; k++)
                {
                    matA[i][k] = 0;
                }
                for (int k = 0; k < m; k++)
                {
                    matA[k][j] = 0;
                }
            }
        }
    }


    // /checking?
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matB[i][j] == 1)
            {
                int sum=0;

                for (int k = 0; k < n; k++)
                {
                    sum+=matA[i][k]; 
                }
                for (int k = 0; k < m; k++)
                {
                    sum+=matA[k][j];
                }
                if (sum==0)
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
        }
    }

    cout<<"YES"<<endl;

    for(auto it:matA)
    {
        for(auto it2:it)
        {
            cout<<it2<<" ";
        }
        cout<<endl;
    }


}