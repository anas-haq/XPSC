/*
    Author: Anas
    Date:   22-05-2024
    Time:   18:41:58
    File:   Permutations.cpp
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    bool flag=true;
    vector<ll>v;
    for (ll i =2; i <=n; i+=2)
    {
        if(i%2==0)
        {
            v.push_back(i);
        }
    }
    for (ll i =1; i <=n; i+=2)
    {
        if(i%2==1)
        {
            v.push_back(i);
        }
    }
    for(ll i=0;i<(ll)v.size()-1;i++)
    {
        if(abs(v[i]-v[i+1])==1)
        {
            flag=false;
            break;
        }
    }
    if(flag)
    {
        for(auto it:v)cout<<it<<" ";
    }
    else
    {
        cout<<"NO SOLUTION";
    }
    
    
    return 0;
}