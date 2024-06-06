/*
    Author: Anas
    Date:   06-06-2024
    Time:   16:41:14
    File:   A_Greg_and_vay.cpp
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

#define ll long long
const int MAX = 1e5 + 7;

int main()
{

    ll n, m, k, l, r, val;
    vector<ll> v(MAX), query(MAX), update(MAX);
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    vector<pair<pair<ll, ll>, ll>> vq(m + 2);
    for (int i = 1; i <= m; i++)
    {
        cin >> l >> r >> val;
        vq[i] = {{l, r}, val};
    }
    while (k--)
    {
        cin >> l >> r;
        query[l]++, query[r + 1]--;
    }
    for (int i = 1; i <= m; i++)
    {
        query[i] += query[i - 1];
    }
    for (int i = 1; i <= m; i++)
    {
        l = vq[i].first.first, r = vq[i].first.second, val = vq[i].second * query[i];
        update[l] += val, update[r + 1] -= val;
    }
    for (int i = 1; i <= n; i++)
    {
        update[i] += update[i - 1];
    }
    for (int i = 1; i <= n; i++)
    {
        cout << v[i] + update[i] << " ";
    }
    return 0;
}