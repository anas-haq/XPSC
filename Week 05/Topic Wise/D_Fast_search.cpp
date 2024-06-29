/*
    Author: Anas
    Date:   29-06-2024
    Time:   17:41:45
    File:   D_Fast_search.cpp
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(auto &x:v)cin>>x;
    sort(v.begin(),v.end());
    ll k;
    cin>>k;
    while (k--)
    {
        ll a,b;
        cin>>a>>b;
        ll ans=0,ans1=0;
        ans=lower_bound(v.begin(),v.end(),a)-v.begin();
        ans1=upper_bound(v.begin(),v.end(),b)-v.begin();
        cout<<(ans1-ans)<<" ";
    }
    
    return 0;
}
