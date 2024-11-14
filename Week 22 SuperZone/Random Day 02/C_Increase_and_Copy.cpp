/*
    Author: Anas
    Date:   26-09-2024
    Time:   13:55:21
    File:   C_Increase_and_Copy.cpp
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
        ll n;
        cin >> n;
        ll ans = LLONG_MAX;
        ll x=ceil(sqrtl(n));
        for (ll i =1; i <=x; i++)
        {
            ll k=(i-1)+((n-1)/i);
            ans=min(ans,k);
        }        
        cout << ans << "\n";
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
