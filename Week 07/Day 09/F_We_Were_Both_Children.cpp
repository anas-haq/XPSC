/*
    Author: Anas
    Date:   12-05-2024
    Time:   00:22:25
    File:   F_We_Were_Both_Children.cpp
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(ll &x:v)
        {
            cin>>x;
        }
        sort(v.begin(),v.end());
        map<ll,ll>mp;
        for (ll i = 0; i <n; i++)
        {
            if(v[i]<=n)
            {
                mp[v[i]]++;
            }
        }
        vector<ll>a(n+1,0);
        for (ll i = 1; i <=n; i++)
        {
            if(mp[i]!=0)
            {
                for(ll j=i;j<=n;j+=i)
                {
                    a[j]+=mp[i];
                }
            }
        }
        sort(a.rbegin(),a.rend());
        cout<<a[0]<<'\n';

        
    }
    
    return 0;
}