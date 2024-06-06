/*
    Author: Anas
    Date:   06-06-2024
    Time:   10:28:56
    File:   C_Little_Girl_and_Maximum_Sum.cpp
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
    
    ll n,q;
    cin>>n>>q;
    vector<ll>v(n+1);
    for (ll i =1; i <=n; i++)
    {
        cin>>v[i];
    }
    vector<ll>d(n+2),k;
    for (ll i =1; i <=q; i++)
    {
        ll l,r;
        cin>>l>>r;
        d[l]+=1;
        d[r+1]-=1;
    }
    // sort()
    for (ll i = 1; i <=n; i++)
    {
        // cout<<d[i]<<" ";
        d[i]=d[i-1]+d[i];
    }
    for (ll i = 1; i <=n; i++)
    {
        // cout<<d[i]<<" ";
        k.push_back(d[i]);
        // d[i]=d[i-1]+d[i];
    }
    sort(k.rbegin(),k.rend());
    ll ans=0;
    sort(v.rbegin(),v.rend());
    for (ll i = 0; i < (ll)(k.size()); i++)
    {
        // ll j=i;
        // while (k[j]!=0)
        // {
        //     ans+=v[j];
        //     k[j]--;
        // }
        ll sum=v[i]*k[i];
        ans+=sum;
        
    }
    cout<<ans<<"\n";
    

    
    
    return 0;
}