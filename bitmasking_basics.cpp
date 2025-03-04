#include <bits/stdc++.h>
using namespace std;

int main()
{

    // int n = 309; // 100110101
    // int mask = 0;

    // // find the i+1 th bit
    // int i = 4;
    // mask = 1 << i;

    // if (mask & n)
    // {
    //     cout << "Fifth bit is 1";
    // }
    // else
    // {
    //     cout << "Fifth bit is not 0";
    // }

    // set i+1 th bit
    // int n = 309; // 100110101
    // int mask = 0;

    // int i = 6;
    // mask = 1 << i;
    // n = n | mask;

    // if (mask & n)
    // {
    //     cout << "6th bit is 1";
    // }
    // else
    // {
    //     cout << "6th bit is not 0";
    // }

    // clear i+1 th bit

    // int n = 309; // 100110101
    // int mask = 0;

    // mask=~(mask|1<<2);
    // n = (n & mask);

    // int newmask = 1 << 2;

    // cout<<(newmask&n);

    // toggle i+1 th bit
    // int n = 309; // 100110101
    // int mask = 0;
    // mask = 1 << 2;
    // n = n ^ mask;
    // cout<<(mask&n);

    // how many bits to change for converting a to b

    //     int a=22;//10110
    //     int b=27;//11011

    //     int c=a^b;//01101
    //     int mask=0;
    //     int count=0;
    //     while(c)
    //     {
    //         mask=c&1;
    //         if(mask==1)
    //         {
    //             count++;
    //         }
    //         c=c>>1;
    //     }
    // cout<<count;

    // checking how many bits are 1

    int n = 22; // 10110
    int count = 0;
    while (n)
    {
        n = n & (n - 1);// turns the least sig 1 to 0
        count++;
    }

    cout << count;
    return 0;
}