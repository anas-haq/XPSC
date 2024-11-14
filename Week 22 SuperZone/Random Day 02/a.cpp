/*
    Author: Anas
    Date:   25-09-2024
    Time:   21:33:40
    File:   a.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t=1;
    // cin >> t;

    // auto Anas = [&]() {
        
        
    // };

    while (t--) {
        // Anas();
        ll n;
        cin>>n;
        ll cnt=0;
        while (n--)
        {
            ll a,b,c;
            cin>>a>>b>>c;
            if(a==1 && b==1 || b==1 && c==1 || a==1 && c==1)
            {
                cnt++;
            }
        }
        cout<<cnt<<"\n";
    }
    
    return 0;
}
