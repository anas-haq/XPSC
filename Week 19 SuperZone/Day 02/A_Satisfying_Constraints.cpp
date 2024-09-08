/*
    Author: Anas
    Date:   06-09-2024
    Time:   12:05:05
    File:   A_Satisfying_Constraints.cpp
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
        set<ll>st;
        ll a=1,b=LLONG_MAX,k,x;
        for (ll i = 0; i < n; i++)
        {
            cin>>k>>x;
            if(k==1)
            {
                a=max(a,x);
            }
            else if(k==2)
            {
                b=min(b,x);
            }
            else
            {
                st.insert(x);
            }            
        }
        ll cnt=0;
        if(b<a)
        {
            cout<<0<<"\n";
            return;
        }
        for(auto i:st)
        {
            if(i>= a && i<=b)
            {
                cnt++;
            }
        }
        cout<<(b-a-cnt)+1<<"\n";
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
