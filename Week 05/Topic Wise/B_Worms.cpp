/*
    Author: Anas
    Date:   29-06-2024
    Time:   22:33:38
    File:   B_Worms.cpp
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

#define ll long long

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, sum = 0;
    cin >> n;
    vector<ll> v(n), k;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
        k.push_back(sum);
    }
    // for (ll i = 0; i < (ll)(k.size()); i++)
    // {
    //     cout<<k[i]<<" ";
    // }
    ll q;
    cin >> q;
    while (q--)
    {
        ll a;
        cin >> a;
        ll l = 0, r = n - 1, mid,ans;
        while (l < r)
        {
            mid = (l + r) / 2;
            if (k[mid] >= a)
            {
                r = mid;
            }
            else
            {
                l = mid + 1;
            }
        }
        ans = l + 1;

        cout << ans << '\n';
    }

    return 0;
}