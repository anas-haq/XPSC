/*
    Author: Anas
    Date:   12-08-2024
    Time:   20:18:33
    File:   F_Forever_Winter.cpp
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
        ll n,m;
        cin>>n>>m;
        vector<ll>a(n);
        for (ll i = 0; i <m; i++)
        {
            ll u,v;
            cin>>u>>v;
            u--,v--;
            a[u]++,a[v]++;
        }
        ll cnt=count(a.begin(),a.end(),1);
        ll x=n-cnt-1;
        ll y=cnt/x;
        cout<<x<<" "<<y<<"\n";        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
