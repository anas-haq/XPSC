/*
    Author: Anas
    Date:   05-09-2024
    Time:   19:52:34
    File:   A_Binary_Imbalance.cpp
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
        string s;
        cin>>s;
        ll one=0,zero=0;
        for (ll i = 0; i < n; i++)
        {
            if(s[i]=='1')
            {
                one++;
            }
            else
            {
                zero++;
            }
            
        }
        if(zero>0)
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
