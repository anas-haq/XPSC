/*
    Author: Anas
    Date:   01-08-2024
    Time:   12:32:03
    File:   B_Appending_Mex.cpp
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
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(auto &x:v)cin>>x;
        ll cnt=0;
        for (ll i = 0; i < n; i++)
        {
            if(v[i]>cnt)
            {
                cout<<i+1;
                return;
            }
            else if(v[i]==cnt)
            {
                cnt++;
            }
        }
        cout<<"-1";
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
