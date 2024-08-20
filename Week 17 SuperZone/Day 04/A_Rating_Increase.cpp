/*
    Author: Anas
    Date:   18-08-2024
    Time:   22:36:20
    File:   A_Rating_Increase.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    auto Anas = [&]()
    {
        string s;
        cin >> s;
        string a, b;
        a += s[0];

        bool f = 0;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] != '0')
                f = 1;
            if (f == 0)
                a += s[i];
            else
                b += s[i];
        }
        if ((int)a.size() < (int)b.size() || (a.size() == b.size() && a < b))
            cout << a << ' ' << b << "\n";
        else
            cout << -1 << "\n";
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}