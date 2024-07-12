/*
    Author: Anas
    Date:   12-07-2024
    Time:   12:43:09
    File:   E_Queue_Sort.cpp
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

        auto mn=min_element(v.begin(),v.end());

        if(!is_sorted(mn,v.end())){
            cout<<"-1"<<'\n';
            return;
        }

        cout<<mn-v.begin()<<"\n";
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
