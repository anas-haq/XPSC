/*
    Author: Anas
    Date:   13-07-2024
    Time:   19:35:33
    File:   B_Sport_Mafia.cpp
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
        ll n,k;
        cin>>n>>k;

        ll cnt=0,sum=0,add=1;
        for (ll i =1; i <=n; i++)
        {
            if(k<sum)
            {
                sum--;
                cnt++;
                continue;
            }
            sum+=add;
            add++;
        }
        cout<<cnt<<"\n";
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
