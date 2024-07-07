/*
    Author: Anas
    Date:   07-07-2024
    Time:   10:57:29
    File:   B_Sets_and_Union.cpp
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
        set<ll>s;
        vector<set<ll>>v;
        map<ll,vector<ll>>mp;
        for (ll i = 0; i <n; i++)
        {
            ll m;
            cin>>m;
            set<ll>s1;
            for (ll j = 0; j < m; j++)
            {
                ll x;
                cin>>x;
                s1.insert(x);
                s.insert(x);
                mp[x].push_back(i);
            }
            v.push_back(s1);            
        }
        ll ans=0;
        for(auto it:mp)
        {
            set<ll>s2;
            for (ll i = 0; i <n; i++)
            {
                if(find(it.second.begin(),it.second.end(),i)!=it.second.end())
                {
                    continue;
                }
                s2.insert(v[i].begin(),v[i].end());
            }
            if(s!=s2 && ans<s2.size())
            {
                ans=s2.size();
            }
        }
        cout<<ans<<'\n';
    }
    
    return 0;
}