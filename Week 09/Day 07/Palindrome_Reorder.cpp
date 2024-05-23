/*
    Author: Anas
    Date:   23-05-2024
    Time:   23:49:13
    File:   Palindrome_Reorder.cpp
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    ll n = s.size();
    map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }
    int cnt = 0;
    char c;
    for (auto [x, y] : mp)
    {
        if (y % 2 == 1)
        {
            cnt++;
            c = x;
        }
    }
    if (cnt > 1)
    {
        cout << "NO SOLUTION";
        return 0;
    }
    string s2 = "", s3 = "";
    for (auto [x, y] : mp)
    {
        string tmp(y / 2, x);
        s2 += tmp;
        s3 = tmp + s3;
    }
    if (cnt == 1)
    {
        cout << s2 << c << s3;
    }
    else
    {
        cout << s2 << s3;
    }

    return 0;
}