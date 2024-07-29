/*
    Author: Anas
    Date:   14-07-2024
    Time:   20:45:38
    File:   B_Asterisk_Minor_Template.cpp
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
        string a, b;
        cin >> a >> b;

        ll n = a.size(), m = b.size();
        if (a[0] == b[0])
        {
            cout << "YES" << "\n"
                 << a[0] << "*" << "\n";
            return;
        }
        if (a[n - 1] == b[m - 1])
        {
            cout << "YES" << "\n"
                 << "*" << a[n - 1] << "\n";
            return;
        }
        ll i, j, f1 = 0;
        for (i = 0; i < n - 1; i++)
        {
            for (j = 0; j < m - 1; j++)
            {
                if (a[i] == b[j] && a[i + 1] == b[j + 1])
                {
                    f1 = 1;
                    break;
                }
            }
            if (f1)
                break;
        }
        if (f1)
        {
            cout<<"YES\n";
            cout << '*' << a[i] << a[i + 1] << "*\n";
        }
        else
            cout<<"NO\n";
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
