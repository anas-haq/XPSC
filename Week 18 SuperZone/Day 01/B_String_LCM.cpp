/*
    Author: Anas
    Date:   26-08-2024
    Time:   12:18:35
    File:   B_String_LCM.cpp
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
        string s1,s2;
        cin>>s1>>s2;
        ll n=s1.size(),m=s2.size();
        if(m>n)
        {
            swap(s1,s2);
        }
        ll k=(n/__gcd(n,m))*m;
        string ans="";
        while ((ll)ans.size()<k)
        {
            ans+=s2;
        }
        bool ok=true;
        for (ll i = 0; i <(ll)ans.size() ; i+=s1.size())
        {
            if(ans.substr(i,s1.size())!=s1)
            {
                ok=false;
                break;
            }
        }
        if(ok)
        {
            cout<<ans<<"\n";
        }
        else
        {
            cout<<"-1\n";
        }       
        

        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
