/*
    Author: Anas
    Date:   30-09-2024
    Time:   19:40:59
    File:   B_Binary_Colouring.cpp
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
        ll x, i = 0;
        cin >> x;
        vector<ll> v1(32);
        while (x)
        {
            if (x & 1)
                v1[i] = 1;
            i++;
            x = x >> 1;
        }
        i = 0;

        while (i < 32)
        {
            if (v1[i] == 1)
            {
                if (i + 1 < 32 && v1[i + 1] == 1)
                {
                    v1[i] = -1;
                    i++;
                    while (i < 32 && v1[i] == 1)
                    {
                        v1[i] = 0;
                        i++;
                    }
                    v1[i] = 1;
                }
                else
                    i++;
            }
            else
                i++;
        }
        cout << 32 << endl;
        for (i = 0; i < 32; i++)
            cout << v1[i] << "  \n"[i==31];

    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
