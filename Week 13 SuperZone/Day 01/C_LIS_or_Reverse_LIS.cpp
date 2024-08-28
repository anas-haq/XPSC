/*
    Author: Anas
    Date:   28-08-2024
    Time:   18:59:11
    File:   C_LIS_or_Reverse_LIS.cpp
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
        ll n, num;
        cin >> n;
        map<ll, ll> mp;
        while (n--)
        {
            cin >> num;
            mp[num]++;
        }
        n = 0;
        for (auto [a, b] : mp)
        {
            n += min(2LL, b);
        }
        ll ans = n / 2;
        if (n % 2 == 1)
        {
            ans++;
        }
        cout << ans << endl;
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
