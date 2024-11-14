/*
    Author: Anas
    Date:   25-09-2024
    Time:   11:54:10
    File:   B_Mex_Master.cpp
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
        for (ll i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        ll cnt=0,mx=0;
        for (ll i = 0; i <n; i++)
        {
            if(v[i]==0)
            {
                cnt++;
            }
            mx=max(mx,v[i]);
        }
        if(cnt<=n-cnt+1)
        {
            cout<<"0\n";
        }
        else
        {
            if(mx==0)
            {
                cout<<"1\n";
            }
            else if(mx==1)
            {
                cout<<"2\n";
            }
            else
            {
                cout<<"1\n";
            }            
        }      
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
