/*
    Author: Anas
    Date:   23-09-2024
    Time:   23:33:13
    File:   A_Shuffle_Hashing.cpp
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
        if(m<n)
        {
            cout<<"NO\n";
            return;
        }
        bool ok=false;
        sort(s1.begin(),s1.end());
        for (ll i = 0; i <m; i++)
        {
            if(i+n-1<m)
            {
                string h="";
                for (ll j =i; j<=i+n-1; j++)
                {
                    h+=s2[j];
                }
                sort(h.begin(),h.end());
                if(h==s1 && !ok)
                {
                    ok=true;
                    cout<<"YES\n";
                    return;
                }
                
            }
        }
        if(!ok)
        {
            cout<<"NO\n";
        }
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
