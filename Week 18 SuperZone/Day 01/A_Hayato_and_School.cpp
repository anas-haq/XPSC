/*
    Author: Anas
    Date:   26-08-2024
    Time:   10:50:25
    File:   A_Hayato_and_School.cpp
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
        vector<ll>v(n),odd,even;
        for (ll i = 0; i < n; i++)
        {
            cin>>v[i];
            if(v[i]&1)
            {
                odd.push_back(i);
            }
            else
            {
                even.push_back(i);
            }
            
        }
        if((ll)odd.size()>=3)
        {
            cout<<"YES"<<"\n";
            cout << odd[0] + 1 << ' ' << odd[1] + 1 << ' ' << odd[2] + 1 << '\n';        
        }
        else if((ll)odd.size()>=1 && (ll)even.size()>=2)
        {
            cout<<"YES\n";
            cout << odd[0] + 1 << ' ' << even[0] + 1 << ' ' << even[1] + 1 << '\n';
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
