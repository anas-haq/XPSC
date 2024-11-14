/*
    Author: Anas
    Date:   21-09-2024
    Time:   20:56:20
    File:   B_Robin_Hood_and_the_Major_Oak.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll tt = 1;
    cin >> tt;

    auto Anas = [&]()
    {
        ll n, k;
        cin >> n >> k;
        ll sum = max(1LL, n - k + 1);
        ll odd = ((n - sum) / 2) + 1;

        if (sum % 2 == 0)
        {
            odd = (n - sum + 1) / 2;
        }

        cout << (odd % 2 == 0 ? "YES\n" : "NO\n");
    };

    while (tt--)
    {
        Anas();
    }

    return 0;
}
