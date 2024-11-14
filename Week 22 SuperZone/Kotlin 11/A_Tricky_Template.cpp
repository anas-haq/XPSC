/*
    Author: Anas
    Date:   23-09-2024
    Time:   23:15:48
    File:   A_Tricky_Template.cpp
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
        string a,b,c,t="";
        cin>>a>>b>>c;
        for (ll i = 0; i < n; i++)
        {
            if(a[i]==c[i])            
            {
                // cout<<t<<" ";
                t+=a[i];
                // continue;
            }
            else if(b[i]==c[i])            
            {
                // cout<<t<<" ";
                t+=b[i];
                // cout<<t<<" ";
                // continue;
            }
        }
        if(t==c)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
        
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
