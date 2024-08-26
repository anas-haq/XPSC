/*
    Author: Anas
    Date:   26-08-2024
    Time:   16:28:45
    File:   B_Napoleon_Cake.cpp
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
        vector<ll> a(n), b(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll sum = 0;
        for (ll i = n - 1; i >= 0; i--)
        {
            if(a[i]==0 && sum>=1)
            {
                b[i]=1;
                sum--;
            }
            else if(a[i]>0)
            {
                sum=max(a[i],sum);
                b[i]=1;
                sum--;
            }
            else
            {
                b[i]=0;
            }
            
        }
        for(auto i:b)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
        
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
