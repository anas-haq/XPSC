/*
    Author: Anas
    Date:   29-06-2024
    Time:   22:15:45
    File:   B_Interesting_drink.cpp
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

#define ll long long

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;cin>>n;
    vector<ll>v(n);
    for(auto &x:v)cin>>x;
    sort(v.begin(),v.end());
    ll q;
    cin>>q;
    while (q--)
    {
        ll a;cin>>a;
        ll ans=upper_bound(v.begin(),v.end(),a)-v.begin();
        cout<<ans<<'\n';

    }
    
    return 0;
}