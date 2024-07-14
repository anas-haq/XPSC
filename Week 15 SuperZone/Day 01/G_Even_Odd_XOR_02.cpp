/*
    Author: Anas
    Date:   14-07-2024
    Time:   19:43:01
    File:   G_Even_Odd_XOR_02.cpp
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

        ll n; cin>>n;
        ll big=(1<<30), a=(1<<29);

        if(n%4==1) cout<<0<<" ";
        else if(n%4==2){
            n=n-6;
            cout<<"4 1 2 12 3 8 ";
        }
        else if(n%4==3){
            n=n-3;
            cout<<"2 1 3 ";
        }
        
        for(ll i=0;i<n/2;i++){ 
            cout<<(big+a)<<" "<<a<<" ";      
            a--;
        }

        cout<<"\n";
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
