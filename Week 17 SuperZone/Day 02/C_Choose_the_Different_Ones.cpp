/*
    Author: Anas
    Date:   12-08-2024
    Time:   19:13:37
    File:   C_Choose_the_Different_Ones.cpp
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
        int a, b, k;
        cin >> a >> b >> k;
        map<int, bool> Hash;
        vector<int> x(a);
        vector<int> y(b);
        for (auto &i : x)
            cin >> i;
        for (auto &i : y)
            cin >> i;

        sort(x.begin(), x.end());
        sort(y.begin(), y.end());
        set<int> ans1;
        set<int> ans2;
        set<int> Final;

        for (auto i : x)
        {
            if (i <= k)
                ans1.insert(i);
        }
        for (auto i : y)
        {
            if (i <= k)
                ans2.insert(i);
        }

        if (ans1.size() < (k / 2) or ans2.size() < (k / 2))
        {
            cout << "NO" << '\n';
            return;
        }

        for (auto i : ans1)
            Final.insert(i);
        for (auto i : ans2)
            Final.insert(i);

        for (auto i : Final)
        {
            Hash[i] = true;
        }
        cout << (Hash.size() == k ? "YES" : "NO") << '\n';
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
