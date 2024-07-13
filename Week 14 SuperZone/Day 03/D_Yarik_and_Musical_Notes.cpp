/*
    Author: Anas
    Date:   12-07-2024
    Time:   20:15:31
    File:   D_Yarik_and_Musical_Notes.cpp
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
	cin >> n;
 
	vector<ll>arr(n);
    for(auto &x:arr)cin>>x;
	
 
	map<ll, ll> freq;
	for(auto i : arr) freq[i]++;
 
	ll ans = 0;
	for(auto i : freq) 
    {
        ans += (i.second * (i.second - 1)) / 2;
    }
    
	ans += freq[1] * freq[2];
 
	cout << ans << '\n';
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
