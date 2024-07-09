/*
    Author: Anas
    Date:   09-07-2024
    Time:   18:12:41
    File:   E_Klever_Permutation.cpp
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
        ll n,k;cin>>n>>k;
        vector<ll>v(n);
        ll mn=n,mx=1;
        for (ll i = 1; i <=k; i++)
        {
            for(ll j=i;j<=n;j+=k)
            {
                if(i%2==1){
                    v[j-1]=mx;
                    mx++;
                }
                else{
                    v[j-1]=mn;
                    mn--;
                }
                
            }
        }        
        for (auto val:v)
        {
            cout<<val<<" ";
        }
        cout<<'\n';        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
