/*
    Author: Anas
    Date:   17-08-2024
    Time:   16:00:23
    File:   A_Make_it_White.cpp
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
        string s;
        cin>>s;
        ll j,r;
        for (ll i = 0; i <n; i++)
        {
            if(s[i]=='B')
            {
                j=i;
                break;
            }
        }
        for (ll i =n-1;i>=0; i--)
        {
            if(s[i]=='B')
            {
                r=i;
                break;
            }
        }
        ll ans=r-j+1;
        cout<<ans<<"\n";
        
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
