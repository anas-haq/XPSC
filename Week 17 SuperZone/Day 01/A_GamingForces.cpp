/*
    Author: Anas
    Date:   10-08-2024
    Time:   16:54:27
    File:   A_GamingForces.cpp
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
        vector<ll>v(n);
        ll cnt=0;
        for (ll i = 0; i <n; i++)
        {
            cin>>v[i];
            if(v[i]==1)
            {
                cnt++;
            }
        }        
        ll ans=(cnt/2)+(n-cnt);
        if(cnt%2==0)
        {
            cout<<ans<<"\n";
        }
        else
        {
            cout<<ans+1<<"\n";
        }
        
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
