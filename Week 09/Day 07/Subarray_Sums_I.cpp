/*
    Author: Anas
    Date:   23-05-2024
    Time:   20:59:18
    File:   Subarray_Sums_I.cpp
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, s;
    cin >> n >> s;
    vector<ll> v(n);
    for (ll &x : v)
    {
        cin >> x;
    }
    long long l = 0, cnt = 0, sum = 0;

    for (ll i = 0; i < n; i++)
    {
        sum += v[i];
        while (sum > s)
        {
            sum -= v[l];
            l++;
        }
        if (sum == s)
        {
            cnt++;
        }
    }

    cout << cnt << '\n';
    return 0;
}