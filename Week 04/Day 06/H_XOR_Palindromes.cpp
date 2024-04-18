#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m = 0, cnt = 0;
        cin >> n;
        string s, res = "";
        cin >> s;
        for (ll i = 0; i < n / 2; i++)
        {
            m += (s[i] != s[n - i - 1]);
        }
        for (ll i = 0; i < m; i++)
        {
            res += "0";
        }
        if (n % 2 != 0)
        {
            for (ll i = m; i <= (n - m); i++)
            {
                res += "1";
            }
        }
        else
        {
            for (ll i = m; i <= (n - m); i++)
            {
                res += (cnt % 2 == 0) ? "1" : "0";
                cnt++;
            }
        }
        for (ll i = 0; i < m; i++)
        {
            res += "0";
        }
        cout << res << endl;
    }
    return 0;
}