/*
    Author: Anas
    Date:   27-09-2024
    Time:   19:36:37
    File:   A_Max_Plus_Size.cpp
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
        vector<int> k(n);
        int a = 0, b = 0;
        int cnt = 0, cnt1 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> k[i];
            if (i % 2 == 0)
            {
                a = max(a, k[i]);
                cnt++;
            }
            else
            {
                b = max(k[i], b);
                cnt1++;
            }
        }
        ll ans = max(a + cnt, b + cnt1);
        cout << ans << endl;
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
