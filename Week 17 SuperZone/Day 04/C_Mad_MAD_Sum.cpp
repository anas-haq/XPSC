/*
    Author: Anas
    Date:   20-08-2024
    Time:   11:51:03
    File:   C_Mad_MAD_Sum.cpp
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

        map<ll, ll> mp;
        ll mad = 0;
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            ans += v[i];
        }
        for (ll i = 0; i < n; i++)
        {
            mp[v[i]]++;
            if (mp[v[i]] >= 2)
            {
                mad = max(mad, v[i]);
            }
            v[i] = mad;
        }
        mp.clear();
        for (ll i = 0; i < n; i++)
            mp[v[i]]++;

        ll prev = 0;
        for (ll i = 0; i < n; i++)
        {
            ans += v[i];
            if (mp[v[i]] > 1)
            {
                ans += (n - i - 1) * v[i];
                prev = v[i];
            }
            else
            {
                ans += (n - i - 1) * prev;
            }
        }

        cout << ans << endl;
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
