/*
    Author: Anas
    Date:   16-05-2024
    Time:   18:41:39
    File:   R_Chef_and_Prime_Divisors.cpp
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool isDivisibleByAllPrimeDivisors(ll a, ll b)
{
    for (ll i = 2; i * i <= b; ++i)
    {
        while (b % i == 0)
        {
            if (a % i != 0)
            {
                return false;
            }
            b /= i;
        }
    }
    if (b > 1 && a % b != 0)
    {
        return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {

        ll a, b;
        cin >> a >> b;
        cout << (isDivisibleByAllPrimeDivisors(a, b) ? "Yes" : "No") << '\n';
    }
    return 0;
}