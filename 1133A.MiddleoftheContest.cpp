#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

    string s1, s2;
    cin >> s1 >> s2;

    int h1 = stoi(s1.substr(0, 2));
    int m1 = stoi(s1.substr(3, 2));

    int h2 = stoi(s2.substr(0, 2));
    int m2 = stoi(s2.substr(3, 2));

    // cout << h1 << ":" << m1 << endl;
    // cout << h2 << ":" << m2 << endl;

    int time = (h1 * 60 + h2 * 60 + m1 + m2) / 2;

    cout << setw(2) << setfill('0') << time / 60 << ":"
         << setw(2) << setfill('0') << time % 60 << endl;
}