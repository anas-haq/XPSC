/*
    Author: Anas
    Date:   11-07-2024
    Time:   16:40:17
    File:   D_Make_a_Power_of_Two.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<ll> v;
    for (ll i = 0; i <= 60; i++)
    {
        ll x = pow(2, i);
        v.push_back(x);
    }

    ll t = 1;
    cin >> t;

    auto Anas = [&]()
    {
        ll n,mn=LLONG_MAX;
        cin>>n;

        string s=to_string(n);
        for (ll i = 0; i <=60; i++)
        {
            string s1 = to_string(v[i]);

            ll k = 0, l = 0, cnt = 0,ans;

            while (k < s.size() && l < s1.size())
            {
                if (s[k] == s1[l])
                {
                    cnt++;
                    l++;
                }
                k++;
            }

            ans = (s.size()-cnt) + (s1.size()-cnt);
            mn = min(mn, ans);
        }
        
        cout << mn << endl;
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
