/*
    Author: Anas
    Date:   12-07-2024
    Time:   21:24:59
    File:   B_Substring_and_Subsequence.cpp
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
        string s,s1;
        cin>>s>>s1;

        ll n=s.size(),m=s1.size();
        ll mn=LLONG_MIN;
        
        for(ll i=0;i<m;i++)
        {
            ll cnt=0;
            for (ll j = 0; j <n; j++)
            {
                if(cnt+i>m)
                {
                    break;
                }
                if(s1[cnt+i]==s[j])
                {
                    cnt++;
                    mn=max(mn,cnt);
                }
            }
            mn=max(mn,cnt);
            cnt=0;            
        }
        cout<<(m+n)-mn<<"\n";
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
