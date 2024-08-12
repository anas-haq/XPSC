/*
    Author: Anas
    Date:   12-08-2024
    Time:   17:18:15
    File:   D_Find_the_Different_Ones.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t = 1;
    cin >> t;
    
    auto Anas = [&]() {
        ll n;
        cin>>n;
        vector<ll>v(n),a(n);
        for (ll i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        a[n-1]=n;
        for (ll i = n-2; i >=0; i--)
        {
            if(v[i]!=v[i+1])
            {
                a[i]=i+1;
            }
            else
            {
                a[i]=a[i+1];
            }            
        }
        ll q;
        cin>>q;
        while (q--)
        {
            ll l,r;
            cin>>l>>r;
            l--,r--;
            if(a[l]<=r)
            {
                cout<<l+1<<" "<<a[l]+1<<"\n";
            }
            else
            {
                cout<<-1<<" "<<-1<<"\n";
            }            
        }
        
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
