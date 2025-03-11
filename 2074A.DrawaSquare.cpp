// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main()
// {

//     ll t;
//     cin >> t;

//     while (t--)
//     {

//         ll l, r, d, u;
//         cin >> l >> r >> d >> u;

//         if ((l + r) == (d + u))
//         {
//             double side1,side2,side3,side4;
//             side1=sqrt(l*l+u*u);
//             side2=sqrt(u*u+r*r);
//             side3=sqrt(d*d+r*r);
//             side4=sqrt(d*d+l*l);

//             if(side1==side2 && side2==side3 && side3==side4 && side4==side1)
//             {
//                 cout<<"YES"<<endl;
//             }
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll l, r, d, u;
        cin >> l >> r >> d >> u;

        if ((l + r) == (d + u))
        {

            double side1 = sqrt(l * l + u * u);
            double side2 = sqrt(u * u + r * r);
            double side3 = sqrt(r * r + d * d);
            double side4 = sqrt(d * d + l * l);
            const double epsilon = 1e-9;

            
            if (fabs(side1 - side2) < epsilon &&
                fabs(side2 - side3) < epsilon &&
                fabs(side3 - side4) < epsilon &&
                fabs(side4 - side1) < epsilon)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {

            cout << "NO" << endl;
        }
    }
    return 0;
}