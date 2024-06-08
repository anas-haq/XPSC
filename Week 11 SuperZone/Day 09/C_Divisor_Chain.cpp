/*
    Author: Anas
    Date:   08-06-2024
    Time:   11:54:52
    File:   C_Divisor_Chain.cpp
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

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v;
        v.push_back(n);
        if (n % 2 == 1)
        {
            n--;
            v.push_back(n);
        }
        while (n != 2)
        {
            ll tmp = 1;
            while (n % (2 * tmp) == 0)
            {
                tmp *= 2;
            }
            if (tmp == n)
            {
                tmp /= 2;
            }
            n -= tmp;
            v.push_back(n);
        }
        v.push_back(1);
        cout << (ll)(v.size()) << '\n';
        for (auto it : v)
        {
            cout << it << " ";
        }
        cout << '\n';
    }

    return 0;
}