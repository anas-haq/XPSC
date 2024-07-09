/*
    Author: Anas
    Date:   09-07-2024
    Time:   19:59:27
    File:   C_Array_Game.cpp
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
        for (auto &x : v)
            cin >> x;
        sort(v.begin(), v.end());
        ll ans = v[0];
        if (k == 1)
        {
            for (ll i = 1; i < n; i++)
            {
                ans = min(ans, v[i] - v[i - 1]);
            }
            cout << ans << "\n";
            return;
        }
        if (k >= 3)
        {
            cout << "0\n";
            return;
        }
        if (k == 2)
        {
            for (int i = 0; i < n - 1; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    ll val = abs(v[j] - v[i]);
                    ans = min(ans, val);
                    int idx = -1;
                    int low = 0, high = n - 1;
                    while (low <= high)
                    {
                        int mid = low + (high - low) / 2;
                        if (v[mid] >= val)
                        {
                            idx = mid;
                            high = mid - 1;
                        }
                        else
                        {
                            low = mid + 1;
                        }
                    }

                    if (idx == -1)
                    {
                        ans = min({ans, val - v[n - 1]});
                    }
                    else
                    {
                        ans = min(ans, v[idx] - val);
                    }
                    if (idx == 0)
                    {
                        ans = min(ans, v[0] - val);
                    }
                    else
                    {
                        ans = min(ans, abs(val - v[idx - 1]));
                    }
                }
            }
            cout << ans << '\n';
            return;
        }
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
