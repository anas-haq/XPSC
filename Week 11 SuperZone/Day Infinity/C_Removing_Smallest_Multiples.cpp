/*
    Author: Anas
    Date:   03-07-2024
    Time:   00:23:35
    File:   C_Removing_Smallest_Multiples.cpp
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
        ll n, i, cost = 0;
        string s;
        cin >> n >> s;
        for (i = 1; i <= n; i++)
        {
            if (s[i - 1] != '1')
            {
                ll j = i;
                while (j <= n && s[j - 1] != '1')
                {
                    if (s[j - 1] == '0')
                    {
                        s[j - 1] = 'e';
                        cost += i;
                    }
                    j += i;
                }
            }
        }
        cout << cost << '\n';
    }
    return 0;
}