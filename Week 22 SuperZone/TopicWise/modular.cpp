/*
    Author: Anas
    Date:   14-11-2024
    Time:   18:50:51
    File:   modular.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll mod=1e9+7;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll test=1;
    cin >> test;

    auto Anas = [&]() {
        ll n;
        cin>>n;
        ll ans=1;
        for (ll i = 1; i <=n; i++)
        {
            ans=((ans%mod)*(i%mod))%mod;
        }
        cout<<ans<<"\n";
        
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
