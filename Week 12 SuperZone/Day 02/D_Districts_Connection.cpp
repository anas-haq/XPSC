/*
    Author: Anas
    Date:   11-07-2024
    Time:   11:57:49
    File:   D_Districts_Connection.cpp
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
        ll n;cin>>n;
        vector<ll>v(n);
        for(auto &x:v)cin>>x;
        bool ok=false;
        for (ll i = 0; i < n-1; i++)
        {
            if(v[i]!=v[i+1])
            {
                ok=true;
            }
        }
        if(ok)
        {
            cout<<"YES\n";
            for (ll i =1; i <n; i++)
            {
                if(v[i]!=v[0])
                {
                    cout<<1<<" "<<i+1<<"\n";
                }
            }
            ll a=-1;
            for (ll i=1; i <n; i++)
            {
                if(v[i]!=v[0])
                {
                    a=i+1;
                    break;
                }
            }
            for (ll i =1; i <n; i++)
            {
                if(v[0]==v[i])
                {
                    cout<<a<<" "<<i+1<<"\n";
                }
            }             
        }
        else
        {
            cout<<"NO\n";
        }        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
