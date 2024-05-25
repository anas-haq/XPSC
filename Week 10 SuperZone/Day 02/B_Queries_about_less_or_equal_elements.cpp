/*
    Author: Anas
    Date:   25-05-2024
    Time:   19:46:13
    File:   B_Queries_about_less_or_equal_elements.cpp
*/
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

#define ll long long

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T> using or_mst = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;
    or_mst<ll> p;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        p.insert(x);
    }
    while (m--)
    {
        int x;
        cin>>x;
        int k=p.order_of_key(x+1);
        cout<<k<<" ";
        // auto it=p.find_by_order(x);
        // cout<<*it<<" ";
    }

    return 0;
}