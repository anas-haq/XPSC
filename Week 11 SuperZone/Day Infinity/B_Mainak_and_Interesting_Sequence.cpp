/*
    Author: Anas
    Date:   04-07-2024
    Time:   23:02:27
    File:   B_Mainak_and_Interesting_Sequence.cpp
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
        ll n, m;
        cin >> n >> m;
        if (n % 2 == 1)
        {
            if (n > m)
            {
                cout << "No\n";
            }
            else
            {
                cout << "Yes\n";
                for (int i = 1; i < n; i++)
                    cout << 1 << ' ';
                cout << m - n + 1 << '\n';
            }
        }
        else
        {
            int baki = m - (n - 2);
            if (m % 2 || baki < 2)
            {
                cout << "No\n";
            }
            else
            {
                cout << "Yes\n";
                for (int i = 1; i <= n - 2; i++)
                    cout << 1 << ' ';
                cout << baki / 2 << ' ' << baki / 2 << '\n';
            }
        }
    }
    return 0;
}