/*
    Author: Anas
    Date:   09-05-2024
    Time:   22:25:46
    File:   C_MEX_Repetition.cpp
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
        ll n,k,miss,last;
        cin>>n>>k;
        vector<ll>v,t;
        for (ll i = 0; i <n; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        t=v;
        sort(t.begin(),t.end());
        miss=n;
        for (ll i = 0; i <n; i++)
        {
            if(t[i]!=i)
            {
                miss=i;
                break;
            }
        }
        ll backup;
        for (ll i = 0; i <n; i++)
        {
            backup=v[i];
            v[i]=miss;
            miss=backup;
        }
        v.push_back(miss);
        last=(k-1)%(n+1);
        for (ll i =(n+1-last); i < (n+1); i++)
        {
            cout<<v[i]<<" ";
        }
        for (ll i =0; i < (n-last); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<'\n';

    }
    
    return 0;
}