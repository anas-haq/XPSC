/*
    Author: Anas
    Date:   14-11-2024
    Time:   20:29:34
    File:   binary_expo_iterative.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const ll mod=1e9+7;
ll power(ll x,ll n, ll mod)
{
    ll ans=1%mod;
    while (n>0)
    {
        if(n&1)
        {
            ans=1LL*ans*x%mod;  //3^(2^0)* 3^(2^1)*3^(2^3)
        }
        x=1LL*x*x%mod;   //3^(2^0)* 3^(2^1)*3^(2^2)*3^(2^3).....
        n>>=1;
    }
    
    return ans;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll test=1;
    cin >> test;

    auto Anas = [&]() {
        ll x,n;
        cin>>x>>n;
        cout<<power(x,n,mod)<<"\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}
