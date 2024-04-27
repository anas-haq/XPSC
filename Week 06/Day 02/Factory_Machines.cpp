#include <bits/stdc++.h>
typedef long long int ll;
// #define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, t;
    cin >> n >> t;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    auto ok = [&](long long m)
    {
        long long total = 0;
        for (int i = 0; i < n; i++)
        {
            total += (m / v[i]);
            if (total >= t)
            {
                return true;
            }
        }
        return false;
    };
    ll l = 1, r = 1e18, mid, ans;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans;
    return 0;
}