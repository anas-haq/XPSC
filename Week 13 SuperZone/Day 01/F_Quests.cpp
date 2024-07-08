/*
    Author: Anas
    Date:   08-07-2024
    Time:   22:48:47
    File:   F_Quests.cpp
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
    while(t--)
    {
        ll n,c,d;
        cin>>n>>c>>d;
        vector<ll>v(n);
        for(auto &x:v)cin>>x;
        sort(v.rbegin(),v.rend());
        ll l=-1,r=d+1,mid;
        while (l<r)
        {
            mid=(l+r+1)/2;
            ll s=0,i=0;
            for(ll k=0;k<d;k++)
            {
                i=k%(mid+1);
                if(i<n)
                {
                    s+=v[i];
                }
            }
            if(s>=c)
            {
                l=mid;
            }
            else
            {
                r=mid-1;
            }            
        }
        if(l==-1)
        {
            cout<<"Impossible"<<'\n';
        }
        else if(l==d+1)
        {
            cout<<"Infinity"<<'\n';
        }
        else 
        {
            cout<<l<<'\n';
        }
        
    }
    return 0;
}