/*
    Author: Anas
    Date:   16-05-2024
    Time:   21:51:20
    File:   C_Non_coprime_Split.cpp
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll getPrime(ll a)
{
    for (ll i = 2; i * i <= a; i++)
    {
        if (a % i == 0)
        {
            return i;
        }
    }
    if(a>2)
    {
        return a;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {

        ll l, r;
        cin >> l >> r;
        if (r <= 3)
        {
            cout << -1 << "\n";
        }
        else
        {
            if (l < r)
            {
                if (r % 2 != 0)
                {
                    r--;
                }
                cout << 2 << " " << r - 2 << "\n";
            }
            else
            {
                ll prime = getPrime(l);
                if (prime == l)
                {
                    cout << -1 << "\n";
                }
                else
                {
                    cout << prime << " " << l - prime << "\n";
                }
            }
        }
    }
    return 0;
}