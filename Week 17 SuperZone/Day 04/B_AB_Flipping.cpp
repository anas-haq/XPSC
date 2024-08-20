/*
    Author: Anas
    Date:   20-08-2024
    Time:   12:46:37
    File:   B_AB_Flipping.cpp
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
        ll i=0,j=n-1,cnt=0;
        while (i<j && s[i]=='B')
        {
            i++;
        }
        while (i<j && s[j]=='A')
        {
            j--;
        }
        cout<<max(0LL,j-i)<<"\n";
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
