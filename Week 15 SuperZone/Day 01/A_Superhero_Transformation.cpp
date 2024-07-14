/*
    Author: Anas
    Date:   13-07-2024
    Time:   16:18:05
    File:   A_Superhero_Transformation.cpp
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
        string s, t;
        cin >> s >> t;
        
        ll i, n1 = s.size(), n2 = t.size();

        auto is_vowel = [&](char ch)
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                return true;
            else
                return false;
        };

        if (n1 == n2)
        {
            for (i = 0; i < n1; i++)
            {
                if (is_vowel(s[i]))
                {
                    if (!is_vowel(t[i]))
                    {
                        cout << "No";
                        return;
                    }
                }
                else
                {
                    if (is_vowel(t[i]))
                    {
                        cout << "No";
                        return;
                    }
                }
            }
            cout << "Yes";
        }
        else
            cout << "No";
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
