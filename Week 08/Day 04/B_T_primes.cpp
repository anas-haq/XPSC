/*
    Author: Anas
    Date:   14-05-2024
    Time:   01:40:25
    File:   B_T_primes.cpp
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
// bool isPrime(ll a)
// {
//     if (a == 1)
//     {
//         return false;
//     }
//     for (ll i = 2; i * i <= a; i++)
//     {
//         if (a % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }
const ll N = 1e7;
vector<bool> prime(N, true);
void id()
{
    prime[1]=false;
    for (ll i = 2; i * i <= N; i++)
    {
        if (prime[i])
        {
            for (ll j = i + i; j <= N; j += i)
            {
                prime[j] = false;
            }
        }
    }
}
bool isPerfectSq(ll n)
{
    ll x = sqrtl(n);
    return (x * x) == n;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll &x : v)
    {
        cin >> x;
    }
    id();
    for (ll i = 0; i < n; i++)
    {
        if (prime[sqrtl(v[i])] && isPerfectSq(v[i]))
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }

    return 0;
}