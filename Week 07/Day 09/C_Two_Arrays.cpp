/*
    Author: Anas
    Date:   11-05-2024
    Time:   23:40:16
    File:   C_Two_Arrays.cpp
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
        vector<ll>a(n),b(n);
        for(ll &x:a)
        {
            cin>>x;
        }
        for(ll &x:b)
        {
            cin>>x;
        }
        bool flag=true;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for (int i = 0; i <n ; i++)
        {
            if(b[i]!=a[i])
            {
                a[i]++;
            }            
            
        }
        for (int i = 0; i <n ; i++)
        {
            if(b[i]!=a[i])
            {
                // a[i]++;
                flag=false;
                break;
            }            
            
        }

        cout<<((flag)?"YES":"NO")<<'\n';
        
    }
    
    return 0;
}