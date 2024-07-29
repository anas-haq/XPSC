/*
    Author: Anas
    Date:   15-07-2024
    Time:   17:39:56
    File:   C_Elemental_Decompress.cpp
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
        vector<ll>v(n+1),a,b;
        for (ll i = 1; i <=n; i++)
        {
            cin>>v[i];
        }
        bool ok=true;
        for(ll i=1;i<=n;i++)
        {
            ll ans=max(i,v[i]);
            if(ans!=v[i])
            {
                ok=false;
            }
            ans=0;
        }
        if(ok)
        {
            cout<<"YES"<<"\n";
            for (ll i = 1; i <=n; i++)
            {
                cout<<i<<" \n"[i==n];
            }
            for (ll i = 1; i <=n; i++)
            {
                cout<<v[i]<<" \n"[i==n];
            }            
        }
        else
        {
            cout<<"NO"<<"\n";
        }
        

        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
