/*
    Author: Anas
    Date:   30-07-2024
    Time:   15:25:49
    File:   D_Prefix_Permutation_Sums.cpp
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
        cin>>n;

        vector<ll>v(n-1);
        for(auto &x:v)cin>>x;

        bool ok=v.back()==1LL*n*(n+1)/2LL;

        for (ll i =n-2; i>=1; i--)
        {
            v[i]-=v[i-1];
        }
        sort(v.begin(),v.end());

        vector<ll>cnt(n+1);
        for(auto it:v)
        {
            if(it<=n)
            {
                cnt[it]=1;
            }
        }

        ll ans=accumulate(cnt.begin(),cnt.end(),0)+ok;
        cout<<((ans==n-1)?"YES":"NO")<<"\n";        
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
