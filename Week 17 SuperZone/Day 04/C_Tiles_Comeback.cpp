/*
    Author: Anas
    Date:   20-08-2024
    Time:   17:01:09
    File:   C_Tiles_Comeback.cpp
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
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        for (auto &x : v)
            cin >> x;

        if (v[0] == v[n - 1])
        {
            ll cnt = 0;
            for (ll i = 0; i < n; i++)
            {
                if (v[i] == v[0])
                    cnt++;
                if (cnt == k)
                    break;
            }
            if (cnt >= k)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
        else
        {
            ll l = -1, r = -1, cnt1 = 0, cnt2 = 0;
            for (ll i = 0; i < n; i++)
            {
                if (v[i] == v[0])
                    cnt1++;
                if (cnt1 == k)
                {
                    l = i;
                    break;
                }
            }
            for (ll i = n - 1; i >= 0; i--)
            {
                if (v[i] == v[n - 1])
                    cnt2++;
                if (cnt2 == k)
                {
                    r = i;
                    break;
                }
            }
            if (l != -1 && r != -1 && l < r)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
