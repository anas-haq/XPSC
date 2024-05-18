/*
    Author: Anas
    Date:   18-05-2024
    Time:   22:36:44
    File:   A_Nastia_and_Nearly_Good_Numbers.cpp
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int n=1e6;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while (t--)
    {
        ll a,b;
        cin>>a>>b;
        ll x=a,y=(a*b),z=(a*(b+1));
        if(b!=1)
        {
            cout<<"YES"<<'\n';
            cout<<x<<" "<<y<<" "<<z<<'\n';
        }
        else
        {
            cout<<"NO"<<'\n';
        }        
        
    }
    
    return 0;
}