/*
    Author: Anas
    Date:   14-11-2024
    Time:   19:50:01
    File:   binary_expo.cpp
*/

// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=3671

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
// const ll mod=1e9+7;
ll power(ll x,ll n,ll mod)
{
    if(n==0)
    {
        return 1;
    }
    ll curr=power(x,n/2,mod);
    if(n&1)
    {
        return (1LL*((curr*curr)%mod) *x) %mod;
    }
    else
    {
        return 1LL*curr*curr;
    }    
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll test=1;
    cin >> test;

    auto Anas = [&]() {
        ll x,n,y;
        cin>>x>>n>>y;
        cout<<power(x,n,y)<<"\n";
    };

    while (test--) {
        Anas();
    }
    
    return 0;
}