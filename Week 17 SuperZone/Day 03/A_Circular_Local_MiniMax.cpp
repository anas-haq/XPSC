/*
    Author: Anas
    Date:   21-08-2024
    Time:   12:53:34
    File:   A_Circular_Local_MiniMax.cpp
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
        for(auto &x:v)cin>>x;
        if(n&1)
        {
            cout<<"NO\n";
            return;
        }
        sort(v.begin(),v.end());
        vector<ll>a(n);
        ll k=0;
        for (ll i = 0; i <n; i+=2)
        {
            a[i]=v[k];
            k++;
        }
        for (ll i = 1; i <n; i+=2)
        {
            a[i]=v[k];
            k++;
        }
        bool ok=false;
        for (ll i = 1; i <n-1 ; i++)
        {
            if(a[i-1]<a[i] && a[i]>a[i+1])
            {
                continue;
            }
            else if(a[i-1]>a[i] && a[i]<a[i+1])
            {
                continue;
            }
            else
            {
                ok=true;
                break;
            }
            
        }
        if(ok)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
            for(auto i:a)
            {
                cout<<i<<" ";
            }
            cout<<"\n";
        }
        
        
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
