/*
    Author: Anas
    Date:   15-07-2024
    Time:   12:15:55
    File:   B_Paranoid_String.cpp
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
        string s;
        cin>>s;
        ll ans=(n*(n+1))/2;
        for (ll i = 0; i <n-1; i++)
        {
            if(s[i]==s[i+1])
            {
                ans-=i+1;
            }
        }
        cout<<ans<<'\n';
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
