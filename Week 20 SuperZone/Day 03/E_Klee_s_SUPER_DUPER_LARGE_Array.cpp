/*
    Author: Anas
    Date:   10-09-2024
    Time:   21:30:53
    File:   E_Klee_s_SUPER_DUPER_LARGE_Array.cpp
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

        ll start = k;
        ll end = k + (n - 1);
        ll ans = 1e18;
        ll l = start, r = end, mid;

        auto sum = [&](ll a, ll b, ll c) -> pair<ll, ll>
        {
            ll total = (b * (b + 1)) / 2;
            ll midsum = (c * (c + 1)) / 2;
            ll lsum = midsum - ((a * (a - 1)) / 2);
            ll rsum = total - midsum;
            return {lsum, rsum};
        };

        while (l <= r)
        {
            mid = (l + r) / 2;
            pair<ll, ll> cnt = sum(start, end, mid);

            ll lsum = cnt.first;
            ll rsum = cnt.second;

            ans = min(ans, abs(lsum - rsum));

            if (lsum < rsum)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        cout << ans << "\n";
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
