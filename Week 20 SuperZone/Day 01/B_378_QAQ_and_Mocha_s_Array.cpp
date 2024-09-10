/*
    Author: Anas
    Date:   25-05-2024
    Time:   20:40:02
    File:   B_378_QAQ_and_Mocha_s_Array.cpp
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

#define ll long long

template <typename T>using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n),k;
        for (ll &x : v)
        {
            cin >> x;
        }
        sort(v.begin(), v.end());
        bool flag = true;
        ll a = v[0];
        // vector<ll>k;
        for (ll i = 0; i < n; i++)
        {
            if (v[i] % a != 0)
            {
                k.push_back(v[i]);
            }
        }
        sort(k.begin(),k.end());
        int m=k.size(), b = k[0];
        for (int i = 0; i <m; i++)
        {
            if(k[i]%b!=0)
            {
                flag=false;
                break;
            }
        }
        cout<<((flag)?"YES":"NO")<<'\n';
        
        
    }

    return 0;
}