/*
    Author: Anas
    Date:   30-07-2024
    Time:   11:51:10
    File:   C_Flower_City_Fence.cpp
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
        vector<ll>a(n+1),b(n+1);
        for (ll i = 1; i <=n; i++)
        {
            cin>>a[i];
        }
        if(a[1]!=n)
        {
            cout<<"NO\n";
            return;
        }
        for (ll i =1; i <=n; i++)
        {
            b[a[i]]++;
        }
        for (ll i = n-1; i>=1;i--)
        {
            b[i]+=b[i+1];
        }
        cout<<((b==a)?"YES":"NO")<<"\n";
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
