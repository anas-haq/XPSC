/*
    Author: Anas
    Date:   10-08-2024
    Time:   12:07:05
    File:   B_Sum_of_Medians.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;

    auto Anas = [&]()
    {
        ll n, k;
        cin >> n >> k;
        vector<ll>v(n*k);
        for (ll i = 0; i <(ll)(n*k); i++)
        {
            cin>>v[i];
        }
        ll ans=0;
        ll i=n*k;
        while (k--)
        {
            i=i-(n/2+1);
            ans+=v[i];
        }
        cout<<ans<<"\n";
        
        
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
