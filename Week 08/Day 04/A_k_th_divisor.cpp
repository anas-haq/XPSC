/*
    Author: Anas
    Date:   13-05-2024
    Time:   11:32:42
    File:   A_k_th_divisor.cpp
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, k;
    cin >> n >> k;
    vector<ll> v;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            if (n / i != i)
            {
                v.push_back(n / i);
            }
        }
    }
    sort(v.begin(), v.end());
    // cout<<v.size();
    // for (int i = 0; i < v.size(); i++)
    //     cout << v[i] << " ";
    if (v.size() < k)
    {
        // cout<<v[k-1];
        cout<<-1;
    }
    else
    {
        // cout<<-1;
        cout<<v[k-1];
    }

    return 0;
}