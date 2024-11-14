/*
    Author: Anas
    Date:   23-09-2024
    Time:   22:57:12
    File:   B_Battle_for_Survive.cpp
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
        ll sum=0;
        for (ll i = 0; i <n; i++)
        {
            cin>>v[i];
            sum+=v[i];
        }
        sum-=v[n-2];
        sum-=v[n-2];
        cout<<sum<<"\n";
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
