/*
    Author: Anas
    Date:   15-09-2024
    Time:   15:55:54
    File:   B_2_The_Strict_Teacher_Hard_Version.cpp
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
        ll n, m, q;
        cin >> n >> m >> q;
        set<ll> s;
        for (ll i = 1; i <= m; i++)
        {
            ll x;
            cin >> x;
            s.insert(x);
        }

        while (q--)
        {
            ll x;
            cin >> x;
            if (x > *s.rbegin())
            {
                cout << (n - *s.rbegin());
            }
            else if (x < *s.begin())
            {
                cout << (*s.begin() - 1);
            }
            else
            {
                auto UB = s.upper_bound(x);
                ll L, R;
                R = *UB;
                UB--;
                L = *UB;
                cout << (R - L) / 2;
            }
            cout << '\n';
        }
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}