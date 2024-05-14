/*
    Author: Anas
    Date:   14-05-2024
    Time:   21:04:33
    File:   C_Fadi_and_LCM.cpp
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
    ll n;
    cin >> n;
    ll ans;
    for (ll i = 1; i*i<=n; i++)
    {
        ll j = n /i; 
        if (n%i==0 && lcm(i, j) == n)
        {
            ans=i;
            // break;
        }
    }
    cout << ans << " " << n/ans << endl;

    return 0;
}