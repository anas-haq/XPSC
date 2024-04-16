#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        ll odd = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll l = 0, r = 0, ans = 0;
        while (r < n)
        {
            if ((r - l + 1) == k)
            {
                ll o = l, p = r;
                while (o <= p)
                {
                    if (v[o] & 1)
                    {
                        ans++;
                        break;
                    }
                    o++;
                }

                l++;
            }
            r++;
        }
        cout << ans << '\n';
    }
    return 0;
}
