/*
    Author: Anas
    Date:   08-06-2024
    Time:   12:32:37
    File:   C_Boats_Competition.cpp
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
    
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;cin>>n;
        vector<ll>v(n);
        map<ll,ll>mp;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }
        ll mx=LLONG_MIN;
        for (int i = 2; i <=(n*2); i++)
        {
            ll cnt=0;
            for(auto [x,y]:mp)
            {
                ll a=(i-x);
                if(a>0 && mp.count(a))
                {
                    // cnt++;
                    cnt+=min(y,mp[a]);
                }
            }
            cnt/=2;
            mx=max(cnt,mx);
        }
        cout<<mx<<'\n';
                
        
    }
    
    return 0;
}