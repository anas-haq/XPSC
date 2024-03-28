#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    map<ll, ll> mp;
    ll l = 0, r = 0, ans = 0;
    while (r < n)
    {
        mp[v[r]]++;
        if (mp.size() <= k)
        {
            ans += (r - l + 1);
        }
        else
        {
            while (mp.size() > k)
            {
                mp[v[l]]--;
                if (mp[v[l]] == 0)
                    mp.erase(v[l]);
                l++;
            }
            ans += (r - l + 1);
        }
        r++;
    }
    cout << ans << '\n';

    return 0;
}
