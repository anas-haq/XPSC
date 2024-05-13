/*
    Author: Anas
    Date:   13-05-2024
    Time:   23:08:32
    File:   D_Divide_and_Equalize.cpp
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            for (int j = 2; j * j <= v[i]; j++)
            {
                if (v[i] % j == 0)
                {
                    while (v[i] % j == 0)
                    {
                        mp[j]++;
                        v[i] /= j;
                    }
                }
            }
            if (v[i] > 1)
            {
                mp[v[i]]++;
            }
        }
        bool ok = true;
        for (auto [x, y] : mp)
        {
            if (y % n != 0)
            {
                ok = false;
                break;
            }
        }
        cout << ((ok) ? "YES" : "NO") << '\n';
    }

    return 0;
}