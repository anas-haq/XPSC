/*
    Author: Anas
    Date:   21-09-2024
    Time:   20:46:53
    File:   Robin_Helps.cpp
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
        ll n,k;
        cin>>n>>k;
        ll cnt=0,sum=0;
        vector<ll>v(n);
        for (ll i = 0; i <n; i++)
        {
            cin>>v[i];
        }
        for (ll i = 0; i <n; i++)
        {
            if (v[i] == 0 && sum > 0) {
                cnt++;
                sum--;
            }
           else if (v[i] >= k) {
                sum += v[i];
            }           
        }
        cout<<cnt<<"\n";
        
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
