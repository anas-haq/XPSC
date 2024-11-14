/*
    Author: Anas
    Date:   25-09-2024
    Time:   21:20:49
    File:   B_GCD_Partition.cpp
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
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll s1 = 0, s2 = 0;
        for (ll i = 0; i < n; i++)
        {
            s1 += v[i];
        }
        ll ans = 1;
        for (ll i = n - 1; i > 0; i--)
        {
            s1 -= v[i];
            s2 += v[i];
            ans = max(ans, (__gcd(s1, s2)));
        }
        cout << ans << "\n";
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
