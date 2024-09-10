/*
    Author: Anas
    Date:   24-08-2024
    Time:   11:38:30
    File:   B_Good_Arrays.cpp
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
        ll n,sum=0,ans=0;
        cin>>n;
        vector<ll>v(n);
        for (ll i = 0; i < n; i++)
        {
            cin>>v[i];
            sum+=v[i];
        }
        for (ll i = 0; i <n; i++)
        {
            if(v[i]==1)
            {
                ans+=2;
            }
            else
            {
                ans++;
            }            
        }
        if(n==1)
        {
            cout<<"NO\n";
            return;
        }
        if(ans<=sum)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
        
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}