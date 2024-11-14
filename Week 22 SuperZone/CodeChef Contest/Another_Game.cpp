/*
    Author: Anas
    Date:   25-09-2024
    Time:   20:43:25
    File:   Another_Game.cpp
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
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (auto &x : v)
            cin >> x;
        bool ok = false;
        for (ll i = 0; i < n; i++)
        {
            if (v[i] != i + 1)
            {
                ok = true;
                break;
            }
        }
        if (!ok)
        {
            cout << "0\n";
            return;
        }
        ll mx = 0;
        for (ll i = 0; i < n - 1; i++)
        {
            mx = max(mx, v[i] + v[i + 1]);
            i++;
        }
        cout << mx << "\n";
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
