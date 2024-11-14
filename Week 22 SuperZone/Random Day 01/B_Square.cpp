/*
    Author: Anas
    Date:   24-09-2024
    Time:   19:30:43
    File:   B_Square.cpp
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
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll i=min(a,b);
        ll j=min(c,d);
        ll k=max(a,b);
        ll f=max(d,c);
        if(i+j==k && k==f)
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
