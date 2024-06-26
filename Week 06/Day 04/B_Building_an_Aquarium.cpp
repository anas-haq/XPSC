#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        auto ok = [&](long long mid)
        {
            long long cnt = 0;
            for (int i = 0; i < n; i++)
            {
                if (v[i] < mid)
                {
                    cnt += mid - v[i];
                }
            }
            return cnt <= k;
        };

        long long l = 1, r = 2e9, mid, ans = 0;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
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
        cout << ans << '\n';
    }

    return 0;
}