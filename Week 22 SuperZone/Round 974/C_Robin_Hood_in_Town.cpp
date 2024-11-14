/*
    Author: Anas
    Date:   21-09-2024
    Time:   22:12:25
    File:   C_Robin_Hood_in_Town.cpp
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
        if (n == 1 || n == 2)
        {
            cout << "-1\n";
            return;
        }
        ll sum = accumulate(v.begin(), v.end(), 0LL);
        ll l = 0, r = 1e18, mid;
        while (l < r)
        {
            mid = (l + r) / 2;
            double long s = sum + mid;
            double long avg = s / n;
            double long h = avg / 2.0;

            ll cnt = 0;
            for (ll i = 0; i < n; i++)
            {
                if (v[i] < h)
                {
                    cnt++;
                }
            }
            if (cnt > n / 2)
            {
                r = mid;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << l << "\n";
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
