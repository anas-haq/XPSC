/*
    Author: Anas
    Date:   04-09-2024
    Time:   16:46:17
    File:   B_WOW_Factor.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t=1;
    // cin >> t;

    auto Anas = [&]() {
        string s;
        cin>>s;
        ll n=s.size();
        ll cnt=0,ans=0,sum=0;
        for (ll i = 0; i <n; i++)
        {
            if(s[i]=='o')
            {
                sum+=cnt;
            }
            else if(i>0 && s[i-1]=='v')
            {
                cnt++;
                ans+=sum;
            }
        }
        cout<<ans<<"\n";
        

    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
