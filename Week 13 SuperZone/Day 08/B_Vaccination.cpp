/*
    Author: Anas
    Date:   11-07-2024
    Time:   19:16:38
    File:   B_Vaccination.cpp
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
        ll n,k,d,w;
        cin>>n>>k>>d>>w;

        vector<ll>t(n);
        for(auto &x:t) cin>>x;        

        ll when=-1,cnt=0,ans=0;

        for (ll i = 0; i <n; i++)
        {
            if(t[i]<=when+d && cnt>0)
            {
                cnt--;
            }
            else
            {
                when=t[i]+w;
                cnt=k-1;
                ans++;
            }            
        }
        
        cout<<ans<<'\n';
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
