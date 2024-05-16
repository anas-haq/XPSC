/*
    Author: Anas
    Date:   16-05-2024
    Time:   11:41:39
    File:   B_Different_v.cpp
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll n = 1e6;
vector<ll> v;
void k()
{
    vector<bool> prime(n + 1, true);
    for (ll i = 2; i * i <= n; i++)
    {
        if (prime[i])
        {
            for (int j = i + i; j <= n; j += i)
            {
                prime[j] = false;
            }
        }
    }

    for (ll i = 2; i <= n; i++)
    {
        if (prime[i])
        {
            v.push_back(i);
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    k();
    while (t--)
    {
        ll a;
        cin >> a;
        ll ans = 1, j = 1;
        for (ll i = 0; i < v.size(); i++)
        {
            if ((v[i] - 1) >= a)
            {

                ans *= v[i];
                j = v[i];
                break;
            }
        }
        for (ll i = 0; i < v.size(); i++)
        {
            if ((v[i] - j) >= a)
            {

                ans *= v[i];
                break;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}
