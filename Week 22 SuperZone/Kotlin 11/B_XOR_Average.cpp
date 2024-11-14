/*
    Author: Anas
    Date:   23-09-2024
    Time:   22:20:21
    File:   B_XOR_Average.cpp
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
        // ll ans=1^3;
        // cout<<ans;
        if(n&1)
        {
            for (ll i = 0; i <n; i++)
            {
                cout<<"1 ";
            }
            cout<<"\n";
            return;            
        }
        cout<<"1 3 ";
        for (ll i = 0; i <n-2; i++)
        {
            cout<<"2 ";
        }
        cout<<"\n";
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
