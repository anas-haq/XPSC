/*
    Author: Anas
    Date:   12-08-2024
    Time:   20:43:57
    File:   B_Long_Long.cpp
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
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] < 0)
                sum += (-1 * v[i]);
            else
                sum += v[i];
        }
        bool ok = false;
        ll cnt = 0;
        for (ll i = 0; i < n; i++)
        {
            if (v[i] < 0 && ok == false)
            {
                cnt++;
                ok = true;
            }
            else if (ok == true)
            {
                if (v[i] > 0)
                    ok = false;
            }
        }

        cout << sum << " " << cnt << "\n";
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
