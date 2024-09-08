/*
    Author: Anas
    Date:   06-09-2024
    Time:   12:42:38
    File:   B_Make_Almost_Equal_With_Mod.cpp
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
        for (ll i = 0; i <n; i++)
        {
            cin>>v[i];
        }
        ll k=1;
        while(true)
        {
            for (ll i = 0; i <n; i++)
            {
                if(v[i]%k!=v[0]%k)
                {
                    cout<<k<<"\n";
                    return;
                }
            }
            k*=2;            
        }
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
