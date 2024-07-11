/*
    Author: Anas
    Date:   11-07-2024
    Time:   12:23:04
    File:   D_Epic_Transformation.cpp
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

        ll mx=LLONG_MIN;

        map<ll,ll>mp;       
        for (ll i = 1; i <=n; i++)
        {
            ll x;
            cin>>x;
            mp[x]++;
            mx=max(mp[x],mx);
        }

        if(mx>n/2)
        {
            ll rem=n-mx;
            cout<<n-(2*rem)<<'\n';
        }
        else
        {
            cout<<(n%2)<<"\n";
        }          
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
