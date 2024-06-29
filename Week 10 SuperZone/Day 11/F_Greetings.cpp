/*
    Author: Anas
    Date:   03-06-2024
    Time:   10:25:34
    File:   F_Greetings.cpp
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
    
    ll t;cin>>t;
    while (t--)
    {
        ll n;cin>>n;
        vector<pair<ll,ll>>v(n);
        for (ll i = 0; i <n; i++)
        {
            cin>>v[i].first>>v[i].second;
        }
        sort(v.begin(),v.end());
        pbds<ll>p;
        for(auto [x,y]:v)
        {
            // cout<<x<<" "<<y<<'\n';
            p.insert(y);
        }
        ll ans=0;
        for (ll i = 0; i <n; i++)
        {           
            // cout<<ans<<" ";
            ans+=p.order_of_key(v[i].second);
            p.erase(v[i].second);
            // cout<<ans<<'\n';
        }
        cout<<ans<<'\n';
        
    }
    
    return 0;
}