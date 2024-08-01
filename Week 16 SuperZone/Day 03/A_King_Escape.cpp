/*
    Author: Anas
    Date:   01-08-2024
    Time:   19:29:58
    File:   A_King_Escape.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    // cin >> t;

    auto Anas = [&]()
    {
        ll n, q1, q2, k1, k2, d1, d2;
        cin >> n >> q1 >> q2 >> k1 >> k2 >> d1 >> d2;
        bool ok;
        if ((k1 < q1 && d1 < q1) || (k1 > q1 && d1 > q1))
        {
            ok = true;
            if ((k2 < q2 && d2 < q2) || (k2 > q2 && d2 > q2))
                ok = true;
            else
                ok = false;
        }
        else
            ok = false;
        if (ok)
            cout << "YES";
        else
            cout << "NO";
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
