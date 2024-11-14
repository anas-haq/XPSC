/*
    Author: Anas
    Date:   25-09-2024
    Time:   20:35:05
    File:   Make_Arithmetic_Progression.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;

    auto Anas = [&]()
    {
        int X, Y, Z;
        cin >> X >> Y >> Z;
        int diff1 = Y - X;
        int diff2 = Z - Y;

        if (diff1 == diff2)
        {
            cout<<"0"<<"\n";
        }
        else
        {
            cout<<"1\n";
        }
        
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
