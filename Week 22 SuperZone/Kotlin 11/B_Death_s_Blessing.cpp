/*
    Author: Anas
    Date:   23-09-2024
    Time:   21:29:15
    File:   B_Death_s_Blessing.cpp
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
        vector<ll>a(n),b(n);
        for(auto &x:a)cin>>x;
        for(auto &x:b)cin>>x;
        ll mx=0,sum=0;
        for (ll i = 0; i < n; i++)
        {
            sum+=a[i];
        }
        for (ll i = 0; i < n; i++)
        {
            mx=max(mx,b[i]);
            sum+=b[i];
        }
        ll ans=sum-mx;
        cout<<ans<<"\n";
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
