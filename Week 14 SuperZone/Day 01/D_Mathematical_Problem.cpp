/*
    Author: Anas
    Date:   01-07-2024
    Time:   01:43:51
    File:   D_Mathematical_Problem.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t=1;
    cin >> t;

    auto Anas = [&]() {
        ll n,a,b,mn; 
        cin>>n;
        string s;
        cin>>s;
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                flag=true;
            }
        }
        if(n==2)
        {
            if(s[0]=='0')
            {
                cout<<s[1]<<'\n';
            }
            else 
            {
                cout<<s<<'\n';
            }
        }
        else if(s[0]=='0' || s[n-1]=='0'||(n>3 && flag))
        {
            cout<<0<<'\n';
        }
        else if(n==3&&flag)
        {
            a=(s[0]-'0')*(s[n-1]-'0');
            b=(s[0]-'0')+(s[n-1]-'0');
            mn=min(a,b);
            cout<<mn<<'\n';
        }
        else 
        {
            mn=LLONG_MAX;
            ll c,x,y,sum,d;
            for(ll i=0;i<n-1;i++)
            {
                a=s[i]-'0';
                b=s[i+1]-'0';
                c=(a*10)+b;
                x=i,y=i+1;
                sum=0;
                for(ll j=0;j<n;j++)
                {
                    if(j!=x&&j!=y)
                    {
                        if(s[j]!='1')
                        {
                            d=s[j]-'0';
                            sum+=d;
                        } 
                    }
                }
                if(sum==0)
                mn=min({mn,c ,sum+c});
                else
                mn=min({mn,sum*c,sum+c});
            }
            cout<<mn<<'\n';
        }
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
