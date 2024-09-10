/*
    Author: Anas
    Date:   10-09-2024
    Time:   12:05:17
    File:   A_Jellyfish_and_Game.cpp
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
        ll n, m, k;
        cin >> n >> m >> k;
        vector<ll> v1(n), v2(m);
        for (ll i = 0; i < n; i++)
        {
            cin >> v1[i];
        }
        for (auto &x : v2)
            cin >> x;
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        if (v1[0] < v2[m - 1])
        {
            swap(v1[0], v2[m - 1]);
        }        
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        if(k%2==0)
        {
            if(v1[n-1]>v2[0])            
            {
                swap(v1[n-1],v2[0]);
            }
        }
        ll sum=accumulate(v1.begin(),v1.end(),0LL);
        cout << sum << "\n";
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
