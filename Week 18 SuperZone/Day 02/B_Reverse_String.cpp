/*
    Author: Anas
    Date:   28-08-2024
    Time:   16:27:33
    File:   B_Reverse_String.cpp
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
        string s, t;
        cin >> s >> t;
        ll n, m;
        n = s.size();
        m = t.size();
        string a = "";
        for (int i = 0; i < n; i++)
        {
            if (s[i] != t[0])
            {
                continue;
            }
            a = "";
            for (int j = i; j < n; j++)
            {
                a += s[j];
                if (a.size() > m)
                {
                    break;
                }
                string b = a;
                ll k = j;
                while (b.size() < m)
                {
                    if (k == 0)
                    {
                        break;
                    }
                    k--;
                    b += s[k];
                }
                if (b == t)
                {
                    cout << "YES\n";
                    return;
                }
            }
        }
        cout << "NO\n";
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
