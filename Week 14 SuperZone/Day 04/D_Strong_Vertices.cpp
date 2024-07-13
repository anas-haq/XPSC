/*
    Author: Anas
    Date:   13-07-2024
    Time:   11:27:07
    File:   D_Strong_Vertices.cpp
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
        ll n,mx=LLONG_MIN;
        cin>>n;

        vector<ll>a(n),b(n),v;
        for (ll i = 0; i <n; i++)
        {
            cin>>a[i];
        }
        for (ll i = 0; i <n; i++)
        {
            cin>>b[i];
            mx=max(mx,a[i]-b[i]);
        }

        for (ll i = 0; i <n; i++)
        {
            if(a[i]-b[i]==mx)
            {
                v.push_back(i+1);
            }
        }

        cout<<v.size()<<"\n";
        for (ll i = 0; i <(ll)v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<"\n";
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
