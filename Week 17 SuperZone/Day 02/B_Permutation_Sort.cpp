/*
    Author: Anas
    Date:   12-08-2024
    Time:   19:32:23
    File:   B_Permutation_Sort.cpp
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
        for(auto &X:v)cin>>X;
        if(is_sorted(v.begin(),v.end()))
        {
            cout<<0<<'\n';
            return;
        }
        if(v[0]==1 || v[n-1]==n)
        {
            cout<<1<<"\n";
        }
        else if(v[0]==n && v[n-1]==1 && n>2)
        {
            cout<<3<<'\n';
        }
        else
        {
            cout<<2<<'\n';
        }
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
