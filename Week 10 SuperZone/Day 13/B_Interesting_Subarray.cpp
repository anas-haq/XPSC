/*
    Author: Anas
    Date:   05-06-2024
    Time:   09:20:10
    File:   B_Interesting_Subarray.cpp
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
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(auto &x:v) cin>>x;
        bool ok=false;
        for (ll i = 0; i <n-1; i++)
        {
            ll j=i+1;
            if(v[i]-v[j]>1)
            {
                cout<<"YES"<<'\n'<<i<<" "<<j<<'\n';
                ok=true;
                break;
            }
            // j++;
        }
        if(!ok) cout<<"NO"<<'\n';
        
    }
    
    return 0;
}