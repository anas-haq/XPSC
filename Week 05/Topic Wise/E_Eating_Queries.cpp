/*
    Author: Anas
    Date:   29-06-2024
    Time:   19:41:03
    File:   E_Eating_Queries.cpp
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
        ll n,q;
        cin>>n>>q;
        vector<ll>v(n);
        for (ll i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        sort(v.rbegin(),v.rend());
        for (ll i = 1; i < n; i++)
        {
            v[i]=v[i]+v[i-1];
        }
        // for (ll i = 1; i < n; i++)
        // {
        //     cout<<v[i]<<" ";
        // }
        while (q--)
        {
            ll a;cin>>a;
            ll ans=-1;
            if(v[n-1]>=a)
            {
                ll l=0,r=n-1,mid;
                while (l<r)
                {
                    mid=(l+r)/2;
                    if(v[mid]>=a)
                    {
                        r=mid;
                    }
                    else
                    {
                        l=mid+1;
                    }
                    
                }
                ans=l+1;                
            }
            cout<<ans<<'\n';

        }        
        
    }
    
    return 0;
}