/*
    Author: Anas
    Date:   12-07-2024
    Time:   14:10:12
    File:   C_Social_Distance.cpp
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
        ll n,k,ans=0;
        cin>>n>>k;

        string s;
        cin>>s;

        ll sum=k;

        for(auto val:s){
            if(val=='0'){
                sum++;
                if(sum==k+1){
                    ans++;
                    sum=0;
                }
            }
            else{
                if(sum<k){
                    ans--;                    
                }
                sum=0;
            }            
        }

        cout<<ans<<"\n";
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
