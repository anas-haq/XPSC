#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll preSum[n];
        preSum[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            preSum[i] = a[i] + preSum[i - 1];
        }
        while (x--)
        {
            ll l, r, k;
            cin >> l >> r >> k;
            if (l == 1)
            {
                ll b = (preSum[n - 1] - preSum[r - 1]) + ((r - l) + 1) * k;
                if (b % 2 == 1)
                {
                    cout << "YES" << '\n';
                }
                else
                {
                    cout << "NO" << '\n';
                }
            }
            else
            {
                ll b = (preSum[n - 1] - (preSum[r - 1] - preSum[l - 2])) + ((r - l) + 1) * k;
                if (b % 2 == 1)
                {
                    cout << "YES" << '\n';
                }
                else
                {
                    cout << "NO" << '\n';
                }
            }
        }
    }
    return 0;
}