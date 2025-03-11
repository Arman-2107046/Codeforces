#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

    ll x;
    cin >> x;

    ll steps = 0;

    for (int i = 5; i > 0; i--)
    {
        steps += x / i;
        x = x % i;
    }

    cout << steps << endl;
}