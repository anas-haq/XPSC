/*
    Author: Anas
    Date:   26-08-2024
    Time:   11:59:58
    File:   A_Shifting_Stacks.cpp
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
        ll need=0,sum=0;
        for (ll i = 0; i <n; i++)
        {
            need+=i;
            sum+=v[i];
            if(sum<need)
            {
                cout<<"NO\n";
                return;
            }

        }
        cout<<"YES\n";
        
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
