/*
    Author: Anas
    Date:   09-09-2024
    Time:   20:04:25
    File:   A_Thorns_and_Coins.cpp
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
        ll cnt=0;
        for (ll i = 0; i <n; i++)
        {
            if(i-1<n-1 && s[i]=='*' && s[i+1]=='*')
            {
                break;
            }
            if(s[i]=='.')
            {
                continue;
            }
            if(s[i]=='@')
            {
                cnt++;
            }
        }
        cout<<cnt<<"\n";
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
