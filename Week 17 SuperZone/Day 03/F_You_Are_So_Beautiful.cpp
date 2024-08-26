/*
    Author: Anas
    Date:   22-08-2024
    Time:   17:41:30
    File:   F_You_Are_So_Beautiful.cpp
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
        vector<ll>v(n),l(n),r(n);
        set<ll>s;
        for (ll i = 0; i <n; i++)
        {
            cin>>v[i];
        }
        for (ll i = 0; i <n; i++)
        {
            if(!s.count(v[i]))
            {
                l[i]=1;
            }
            s.insert(v[i]);
        }
        s.clear();
        for(ll i=n-1;i>=0;i--)
        {
            if(!s.count(v[i]))
            {
                r[i]=1;
            }
            s.insert(v[i]);
        }
        ll ans=0,sum=0;
        for (ll i = 0; i <n; i++)
        {
            sum+=l[i];
            if(r[i])
            {
                ans+=sum;
            }
        }
        cout<<ans<<"\n";       
        
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
