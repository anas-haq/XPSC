/*
    Author: Anas
    Date:   14-05-2024
    Time:   22:25:29
    File:   A_Maximum_GCD.cpp
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll gcd(ll a, ll b)
{
    return __gcd(a, b);
}
ll lcm(ll a, ll b)
{
    return ((a / gcd(a, b)) * b);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll ans;
        ll n;
        cin >> n;
        // cout<<gcd(n,n/2)<<" ";
        if (n % 2 == 1)
        {
            cout << gcd(n - 1, (n / 2)) << '\n';
        }
        else
        {
            cout<<gcd(n,n/2)<<"\n";
        }
        
    }

    return 0;
}