/*
    Author: Anas
    Date:   11-07-2024
    Time:   23:35:00
    File:   B_Collatz_Conjecture.cpp
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

        ll x,y,k;
        cin>>x>>y>>k;

        while (x>1){
            ll p=y-(x%y);
            if(p>=k){
                x+=k;
                k=0;
            }
            else{
                k-=p;
                x+=p;
            }
            while (x%y==0){
                x/=y;
            }
            if(k<=0)break;            
        }
        if(k>0){
            k%=(y-1);
            x+=k;
            while (x%y==0){
                x/=y;
            }            
        }

        cout<<x<<"\n";
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
