/*
    Author: Anas
    Date:   12-07-2024
    Time:   17:16:46
    File:   D_Same_Differences.cpp
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
        
        ll n,cnt=0;
        cin>>n;

        vector<ll>v(n);
        map<ll,ll>mp;

        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin>>v[i];
            x=v[i]-i;
            cnt+=mp[x];
            mp[x]++;
        }

        cout<<cnt<<"\n";        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
