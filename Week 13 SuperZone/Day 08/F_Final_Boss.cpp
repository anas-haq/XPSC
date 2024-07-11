/*
    Author: Anas
    Date:   11-07-2024
    Time:   17:55:10
    File:   F_Final_Boss.cpp
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
        ll h, n, i;
        cin >> h >> n;

        vector<ll> v1(n), v2(n);
        for (i = 0; i < n; i++)
            cin >> v1[i];
        for (i = 0; i < n; i++)
            cin >> v2[i];

        ll l = 1, r = 4e10 + 1, mid, ans;

        while (l <= r)
        {
            mid = (l + r) / 2;
            ll c = 0;
            for (i = 0; i < n; i++)
            {
                ll temp = mid / v2[i];
                if (mid % v2[i])
                    temp++;
                c += (temp * v1[i]);
                if (c >= h)
                    break;
            }
            if (c >= h)
            {
                ans = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        cout << ans << '\n';
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
