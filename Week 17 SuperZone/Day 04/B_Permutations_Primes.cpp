/*
    Author: Anas
    Date:   20-08-2024
    Time:   17:58:17
    File:   B_Permutations_Primes.cpp
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
        if(n==1)
        {
            cout<<1<<'\n';
            return;
        }
        if(n==2)
        {
            cout<<2<<" "<<1<<"\n";
            return;
        }
        vector<ll>v(n,0);
        v[0]=2;
        v[n/2]=1;
        v[n-1]=3;
        ll a=4;
        for (ll i = 0; i <n; i++)
        {
            if(v[i]==0)
            {
                v[i]=a;
                a++;
            }
        }
        for(auto i:v)cout<<i<<" ";
        cout<<"\n";
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
