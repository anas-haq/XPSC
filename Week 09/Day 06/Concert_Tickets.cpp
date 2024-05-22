#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;
    multiset<ll, greater<ll>> ms;

    for (ll i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        ms.insert(a);
    }

    // for (auto it : ms)
    // {
    //     cout << it << " ";
    // }
    // cout << '\n';

    for (ll i = 0; i < m; i++)
    {
        ll b;
        cin >> b;
        auto it = ms.lower_bound(b);
        if (it == ms.end())
        {
            cout << "-1 " << '\n';
        }
        else
        {
            cout << *it << "\n";
            ms.erase(it);
        }
    }
    // cout << '\n';

    return 0;
}
