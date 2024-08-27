/*
    Author: Anas
    Date:   27-08-2024
    Time:   17:27:17
    File:   B_Fun_with_Even_Subarrays.cpp
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

        ll last = v[n - 1];
        bool ok = true;
        for (ll i = 0; i < n; i++)
        {
            if (v[i] != last)
            {
                ok = false;
                break;
            }
        }

        if (ok)
        {
            cout << 0 << '\n';
            return;
        }

        ll cnt = 1;
        ll ans = 0;

        for (ll i = n - 2; i >= 0; i--)
        {
            if (v[i] == last)
            {
                cnt++;
            }
            else
            {
                ans++;
                i -= cnt - 1;
                cnt *= 2;
            }
        }

        cout << ans << '\n';
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
