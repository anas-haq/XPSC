/*
    Author: Anas
    Date:   10-08-2024
    Time:   11:33:11
    File:   B_Fun_Game.cpp
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

    auto Anas = [&]()
    {
        ll n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        if (s1 == s2)
        {
            cout << "YES\n";
            return;
        }
        bool ok = false;
        for (ll i = 0; i < n; i++)
        {
            if (s1[i] == '1')
            {
                ok = true;
                break;
            }
            if (s2[i] == '1')
            {
                break;
            }
        }
        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
