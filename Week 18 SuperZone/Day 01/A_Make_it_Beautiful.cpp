/*
    Author: Anas
    Date:   26-08-2024
    Time:   11:19:50
    File:   A_Make_it_Beautiful.cpp
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
        vector<ll>v(n),a(n);
        for (ll i = 0; i <n; i++)
        {
            cin>>v[i];
        }
        sort(v.rbegin(),v.rend());
        if(v[0]==v[n-1])
        {
            cout<<"NO\n";
            return;
        }
        cout<<"YES\n";
        for (ll i = 0; i <n; i++)
        {
            if(v[i]!=v[i+1])
            {
                for (ll j =i; j<n;j++)
                {
                    cout<<v[j]<<" ";
                }
                for (ll j =0; j<i;j++)
                {
                    cout<<v[j]<<" ";
                }
                cout<<"\n";
                return;                
            }
        }
        
        
        
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
