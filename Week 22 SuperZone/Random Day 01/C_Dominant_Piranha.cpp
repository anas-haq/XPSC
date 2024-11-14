/*
    Author: Anas
    Date:   24-09-2024
    Time:   21:38:55
    File:   C_Dominant_Piranha.cpp
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
        int n;
        cin >> n;
        vector<int> a(n);
        int mx = 0;
        for (auto &it : a)
        {
            cin >> it;
            mx = max(mx, it);
        }
        int k = -1;
        for (int i = 0; i < n; ++i)
        {
            if (a[i] != mx)
                continue;
            if (i > 0 && a[i - 1] != mx)
                k = i + 1;
            if (i < n - 1 && a[i + 1] != mx)
                k = i + 1;
        }
        cout << k << endl;
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
