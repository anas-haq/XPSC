/*
    Author: Anas
    Date:   03-09-2024
    Time:   22:02:58
    File:   The_Legend_of_Freya_the_Frog.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;

    // auto Anas = [&]()
    // {

    // };

    while (t--)
    {
        // Anas();
        ll x, y, k;
        cin >> x >> y >> k;
        ll a = x / k, b = y / k;
        if (x % k)
            a++;
        if (y % k)
            b++;
        ll ans = 2 * max(a, b);
        if (a > b)
            ans--;
        cout << ans << endl;
    }

    return 0;
}