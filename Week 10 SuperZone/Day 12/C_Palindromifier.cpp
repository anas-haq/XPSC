/*
    Author: Anas
    Date:   04-06-2024
    Time:   19:31:59
    File:   C_Palindromifier.cpp
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

    string s;
    cin >> s;
    ll n = s.size();
    cout << 3 << '\n'
         << "R " << n - 1 << '\n'
         << "L " << n << '\n'
         << "L 2\n";
    return 0;
}