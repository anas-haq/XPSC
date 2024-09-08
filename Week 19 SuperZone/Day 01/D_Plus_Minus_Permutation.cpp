/*
    Author: Anas
    Date:   07-09-2024
    Time:   22:29:54
    File:   D_Plus_Minus_Permutation.cpp
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
        ll n,x,y;
        cin>>n>>x>>y;
 
        ll LCM=(x/__gcd(x,y))*y;
        
        ll first=(n/x)-(n/LCM);
        ll second=(n/y)-(n/LCM);
 
        ll res2=(second*(second+1))/2;
        ll res1=(n*(n+1))/2-((n-first)*(n-first+1))/2;
        cout<<res1-res2<<'\n';
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
