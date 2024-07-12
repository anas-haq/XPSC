/*
    Author: Anas
    Date:   12-07-2024
    Time:   11:15:12
    File:   C_Boring_Day.cpp
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
        ll n,l,r;
        cin>>n>>l>>r;

        vector<ll>v(n);
        for(auto &x:v)cin>>x;

        ll i = 0, j = 0, sum = 0, ans = 0;

        while (i < n && j < n){

            while (sum < l && j < n){
                sum += v[j];
                j++;
            }
            while (sum > r && i < j){
                sum -= v[i];
                i++;
            }
            if (sum >= l && sum <= r){
                ans++, i = j, sum = 0;
            }
        }

        cout << ans << '\n';
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
