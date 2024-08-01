/*
    Author: Anas
    Date:   01-08-2024
    Time:   11:07:28
    File:   D_Test_of_Love.cpp
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
        ll n,m,k;
        cin>>n>>m>>k;
        string s;
        cin>>s;
        ll i=-1;
        while (i<n)
        {
            while (i>=0 && i<n && s[i]=='W')
            {
                i++;
                k--;
                if(k<0)
                {
                    cout<<"NO"<<"\n";
                    return;
                }
            }
            if(s[i]=='C')
            {
                cout<<"NO\n";
                return;
            }
            bool ok=false;
            for (ll j=m;j>=1;j--)
            {
                if(i+j>=n)
                {
                    cout<<"YES\n";
                    return;
                }
                if(s[i+j]=='L')
                {
                    i+=j;
                    ok=true;
                    break;
                }
            }
            if(ok)
            {
                continue;
            }
            for(ll j=m;j>=1;j--)
            {
                if(s[i+j]=='W')
                {
                    ok=true;
                    i+=j;
                    break;
                }
            }
            if(ok)
            {
                continue;
            }
            cout<<"NO\n";
            return;           
            
        }
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
