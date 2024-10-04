/*
    Author: Anas
    Date:   14-09-2024
    Time:   22:20:46
    File:   B_1_The_Strict_Teacher_Easy_Version.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll tc=1;
    cin >> tc;

    auto Anas = [&]() {
        ll n,m,q;
        cin>>n>>m>>q;
        ll a, b, k;
        cin >> a >> b >> k;

        if(a>b)
        {
            swap(a,b);
        }
        if(a>k)
        {
            ll ans=abs(1-a);
            cout<<ans<<"\n";
            // continue;
            return;
        }
        if(b<k)
        {
            ll ans=abs(n-b);
            cout<<ans<<"\n";
            // continue;
            return;
        }
        if(a<k && b>k)
        {
            ll ans=(a+b)/2;
            ans=min(abs(ans-b),abs(ans-a));
            cout<<ans<<"\n";            
        }
    };

    while (tc--) {
        Anas();
    }
    
    return 0;
}