/*
    Author: Anas
    Date:   24-09-2024
    Time:   15:30:57
    File:   Variable_Sized_Arrays.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    // cin >> t;

    while (t--)
    {
        ll n, q;
        cin >> n >> q;

        vector<vector<ll>> v(n);

        for (ll i = 0; i < n; i++)
        {
            ll k;
            cin >> k;
            v[i].resize(k);
            for (ll j = 0; j < k; j++)
            {
                cin >> v[i][j];
            }
        }

        for (ll k = 0; k < q; k++)
        {
            ll i, j;
            cin >> i >> j;
            cout << v[i][j] << "\n";
        }
    }

    return 0;
}
