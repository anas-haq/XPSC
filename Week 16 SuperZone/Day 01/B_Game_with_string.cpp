/*
    Author: Anas
    Date:   24-07-2024
    Time:   20:18:14
    File:   B_Game_with_string.cpp
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
        vector<char>v;
        string s;
        cin>>s;
        int a = 0;

        for (auto i : s)
        {
            if (!v.empty() && v.back() == i)
                a++, v.pop_back();
            else
                v.push_back(i);
        }

        cout << ((a & 1) ? "Yes\n" : "No\n");
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
