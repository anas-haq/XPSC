/*
    Author: Anas
    Date:   24-09-2024
    Time:   20:08:35
    File:   B_01_Game.cpp
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
        string s;
        cin>>s;
        ll n=s.size();
        ll one=0,zero=0;
        for (ll i = 0; i <n; i++)
        {
            if(s[i]=='0')
            {
                zero++;
            }
            else
            {
                one++;
            }            
        }
        ll ans=min(one,zero);
        if(ans&1)
        {
            cout<<"DA\n";
            return;
        }
        cout<<"NET\n";       
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
