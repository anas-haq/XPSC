/*
    Author: Anas
    Date:   10-05-2024
    Time:   01:03:08
    File:   O_Binary_Inversions.cpp
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll anas(vector<int>v)
{
    ll a=0,b=0;
    ll n=v.size();
    for (int i = 0; i < n; i++)
    {
        if(v[i]==1) a++;
        else b+=a;
    }    
    return b;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        vector<int>v(n);
        for(int &x:v)
        {
            cin>>x;
        }
        ll idx=-1;
        ll ans=INT_MIN;
        ans=max(ans,anas(v));
        for (int i = 0; i <n; i++)
        {
            if(v[i]==0)
            {
                v[i]=1;
                idx=i;
                break;
            }
        }
        ans=max(ans,anas(v));
        if(idx!=-1)
        {
            v[idx]=0;
        }
        for (int i = n-1; i >=0; i--)
        {
            if(v[i]==1)
            {
                v[i]=0;
                break;
            }
        }
        ans=max(ans,anas(v));
        cout<<ans<<'\n';
    }
    
    return 0;
}