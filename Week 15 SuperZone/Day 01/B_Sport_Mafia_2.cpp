/*
    Author: Anas
    Date:   13-07-2024
    Time:   19:35:33
    File:   B_Sport_Mafia.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t=1;
    // cin >> t;

    auto Anas = [&]() {
        ll n,k;
        cin>>n>>k;
        ll i=1;
        while (1)
        {
            ll ans=(i*(i+1))/2;
            if(ans>=k)
            {
                ll p=n-i;
                if(ans-p==k)
                {
                    cout<<p;
                    return;
                }
            }
            i++;
        }
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
