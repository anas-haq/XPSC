/*
    Author: Anas
    Date:   25-09-2024
    Time:   14:27:00
    File:   B_Quick_Sort.cpp
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
        for (ll &x : v)
            cin >> x;
        ll ans = 0, x = 1;
        for (ll i = 0; i < n; i++)
        {
            if (v[i] == x)
            {
                ans++;
                x++;
            }
        }
        cout << (n - ans + k - 1) / k << "\n";
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
