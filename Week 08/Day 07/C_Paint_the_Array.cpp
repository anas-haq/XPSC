/*
    Author: Anas
    Date:   16-05-2024
    Time:   18:21:37
    File:   C_Paint_the_Array.cpp
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(ll a, ll b)
{
    return __gcd(a, b);
}

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
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll g = v[0];
        for (ll i = 2; i < n; i += 2)
        {
            g = gcd(g, v[i]);
        }
        bool flag = true;
        for (ll i = 1; i < n; i += 2)
        {
            if (v[i] % g == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << g << '\n';
        }
        else
        {
            g = v[1];
            for (ll i = 1; i < n; i += 2)
            {
                g = gcd(g, v[i]);
            }
            flag = true;
            for (ll i = 0; i < n; i += 2)
            {
                if (v[i] % g == 0)
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                cout << g << "\n";
            }
            else
            {
                cout << 0 << '\n';
            }
        }
    }
    return 0;
}
