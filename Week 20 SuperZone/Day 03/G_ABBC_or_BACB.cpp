/*
    Author: Anas
    Date:   10-09-2024
    Time:   17:50:55
    File:   G_ABBC_or_BACB.cpp
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
        string s;
        cin>>s;
        ll n=s.size();
        vector<ll>pre(n),suff(n);
        ll c=0;
        for (ll i = 0; i < n; i++)
        {
            if(s[i]=='A')
            {
                c++;
            }
            else
            {
                pre[i]=c;
                c=0;
            }            
        }
        c=0;
        for(ll i=n-1;i>=0;i--)
        {
            if(s[i]=='A')
            {
                c++;
            }
            else
            {
                suff[i]=c;
                c=0;
            }            
        }
        ll ans=accumulate(suff.begin(),suff.end(),0LL);
        ll sum=ans;
        for (ll i = 0; i <n; i++)
        {
            if(s[i]=='B')
            {
                sum-=suff[i];
                sum+=pre[i];
                ans=max(ans,sum);
            }
        }
        cout<<ans<<"\n";
        

        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
