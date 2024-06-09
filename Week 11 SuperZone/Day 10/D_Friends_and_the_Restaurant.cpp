/*
    Author: Anas
    Date:   09-06-2024
    Time:   13:42:10
    File:   D_Friends_and_the_Restaurant.cpp
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
        vector<ll>a(n),b(n),v(n);
        for(auto &x:a)cin>>x;
        for(auto &x:b)cin>>x;
        for (ll i = 0; i <n; i++)
        {
            v[i]=b[i]-a[i];
        }
        sort(v.begin(),v.end());
        ll i=0,j=n-1;
        ll ans=0;
        while (i<j)
        {
            ll sum=v[i]+v[j];
            if(sum>=0)
            {
                i++;
                j--;
                ans++;
                continue;
            }
            i++;
        }
        cout<<ans<<"\n";

    }
    
    return 0;
}