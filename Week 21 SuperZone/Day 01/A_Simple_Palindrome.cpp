/*
    Author: Anas
    Date:   14-09-2024
    Time:   20:57:49
    File:   A_Simple_Palindrome.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll tc = 1;
    cin >> tc;

    auto Anas = [&]()
    {
        ll m;
        cin >> m;
        string stt = "aeiou";
        map<char, int> mp;
        for (int i = 0; i < m; i++)
            mp[stt[i % 5]]++;
        string s1;
        for (auto i : mp)
        {
            for (int j = 0; j < i.second; j++)
                s1 += i.first;
        }
        cout << s1 << "\n";
    };

    while (tc--)
    {
        Anas();
    }

    return 0;
}