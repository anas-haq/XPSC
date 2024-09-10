/*
    Author: Anas
    Date:   10-09-2024
    Time:   17:46:25
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
        ll cnt=0,sum=0,mn=LLONG_MAX;
        for (ll i = 0; i <n; i++)
        {
            if(s[i]=='A')
            {
                cnt++;
            }
            else
            {
                sum+=cnt;
                mn=min(mn,cnt);
                cnt=0;
            }            
        }
        if(cnt>0)
        {
            sum+=cnt;
            mn=min(mn,cnt);
            cnt=0;
        }
        if(s[0]=='B'||s[n-1]=='B')
        {
            cout<<sum<<"\n";
        }
        else
        {
            cout<<sum-mn<<"\n";
        }        
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
