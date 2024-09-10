/*
    Author: Anas
    Date:   08-09-2024
    Time:   21:42:09
    File:   E_Two_Friends.cpp
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
        map<ll, ll> cnt;
        for (ll i = 1; i <= n; i++)
        {
            ll in;
            cin >> in;
            cnt[in] = i;
        }

        for (auto [x, y] : cnt)
        {
            if (x == cnt[y])
            {
                // cout<<x<<" "<<cnt[x]<<" ";
                cout << 2 << '\n';
                return;
            }
        }

        cout << 3 << '\n';
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
