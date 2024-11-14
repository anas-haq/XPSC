/*
    Author: Anas
    Date:   25-09-2024
    Time:   20:39:27
    File:   Butterfly.cpp
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
        ll a,b,c;
        cin>>a>>b>>c;
        if(a<=(b+c)&& b<=(a+c)&& c<=(a+b))
        {
            cout<<"YES\n";
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
