/*
    Author: Anas
    Date:   04-09-2024
    Time:   13:11:39
    File:   Satyam_and_Counting.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t=1;
    cin >> t;

    auto Anas = [&]() {
        ll n;
        cin>>n;
        map<pair<ll,ll>,ll>mp;
        map<ll,ll>m;
        for (ll i = 0; i <n; i++)
        {
            ll a,b;
            cin>>a>>b;
            mp[{a,b}]++;
            m[a]++;
        }
        ll ans=0;
        for (auto [a,b]:m)
        {
            if(b>=2)
            {
                ans+=n-2;
            }
        }
        for(auto [i,j]:mp)
        {
            auto [x,y]=i;
            if(mp.count({x-1,1-y}) && mp.count({x+1,1-y}))
            {
                ans++;
            }
        }
        cout<<ans<<"\n";
        
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}