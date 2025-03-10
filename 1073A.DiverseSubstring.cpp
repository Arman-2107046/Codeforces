#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool diverseChecking(string &s)
{
 int n=s.size();
vector<int>arr(26,0);

int maxi=-1e9;
for(int i=0;i<s.size();i++)
{
    arr[s[i]-'a']++;

    maxi=max(maxi,arr[s[i]-'a']);
}

if(maxi>(n/2))
return  false;
else
return true;

}




int main()
{
    int n;
    cin>>n;

    string s;
    cin >> s;


    for (int i = 0; i < n; i++)
    {
        for (int j = i; j <= n; j++)
        {

            string subStr=s.substr(i, j -i+ 1);
            if(diverseChecking(subStr)==true)
            {
                cout<<"YES"<<endl;
                cout<<subStr<<endl;
                return 0;
                
            }

        }
    }

    cout<<"NO"<<endl;

    // string s="ab";

    // if(diverseChecking(s)==true)
    // {
    //     cout<<"YES"<<endl;
    // }
    // else
    // {
    //     cout<<"NO"<<endl;
    // }

}