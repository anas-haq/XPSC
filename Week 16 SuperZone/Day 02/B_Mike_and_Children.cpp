/*
    Author: Anas
    Date:   30-07-2024
    Time:   11:18:24
    File:   B_Mike_and_Children.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t=1;
    // cin >> t;

    auto Anas = [&]() {
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(auto &x:v)cin>>x;
        map<ll,ll>mp;
        for (ll i = 0; i <n-1; i++)
        {
            for(ll j=i+1;j<n;j++)
            {
                ll ans=v[i]+v[j];
                mp[ans]++;
            }
        }
        ll ans=LLONG_MIN;
        for(auto it:mp)
        {
            ans=max(it.second,ans);
        }
        cout<<ans;
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
