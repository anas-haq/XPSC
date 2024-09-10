/*
    Author: Anas
    Date:   09-09-2024
    Time:   20:23:54
    File:   A_Monsters_easy_version.cpp
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
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(auto &x:v)cin>>x;
        sort(v.begin(),v.end());
        ll cnt=0,ans=0;
        for (ll i = 0; i <n; i++)
        {
            if((v[i]-cnt)>=1)
            {
                ans+=v[i]-cnt-1;
                cnt++;
            }
        }
        cout<<ans<<"\n";
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
