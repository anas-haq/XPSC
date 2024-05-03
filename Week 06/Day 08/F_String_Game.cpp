#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string t, p;
    cin >> t; cin >> p;
    int n = t.size(), m = p.size();
    vector<int> a(n);
    for (int &x : a)
    {
        cin >> x;
    }
    auto ok = [&](ll mid)
    {
        vector<bool> bad(n + 1);
        for (int i = 0; i < mid; i++)
        {
            bad[a[i]] = true;
        }
        int j = 0;
        bool found = false;
        for (int i = 0; i < n; i++)
        {
            if (p[j] == t[i] && !bad[i + 1])
            {
                j++;
            }
            if (j == m)
            {
                found = true;
                break;
            }
        }
        return found;
    };
    ll l = 0, r = n, mid, ans = 0;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans;

    return 0;
}