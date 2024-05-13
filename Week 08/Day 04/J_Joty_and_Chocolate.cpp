/*
    Author: Anas
    Date:   14-05-2024
    Time:   00:47:02
    File:   J_Joty_and_Chocolate.cpp
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll gcd(ll a,ll b)
{
    return __gcd(a,b);
}
ll lcm(ll a,ll b)
{
    return ((a/gcd(a,b))*b);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,a,b,p,q,ans=0,over;
    cin>>n>>a>>b>>p>>q;
    ans+=(n/a)*p;
    ans+=(n/b)*q;
    over=(n/lcm(a,b));
    ans-=(over*(p+q));
    ans+=(over*max(p,q));
    cout<<ans<<'\n';

    return 0;
}