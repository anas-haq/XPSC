/*
    Author: Anas
    Date:   07-06-2024
    Time:   10:55:55
    File:   B_Karen_and_Coffee.cpp
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

#define ll long long
const int N = 1e6;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n,k,Q,l,r;
    cin >> n >> k >> Q;
    vector<ll> d(N, 0), pre(N, 0);
    while (n--)
    {
        cin >> l >> r;
        d[l]++, d[r + 1]--;
    }
    for (ll i = 1; i < N; i++)
    {
        d[i] += d[i - 1];
        pre[i] += pre[i - 1] + (d[i] >= k);
    }
    while (Q--)
    {
        cin >> l >> r;
        cout << pre[r] - pre[l - 1] << "\n";
    }

    return 0;
}