/*
    Author: Anas
    Date:   04-05-2024
    Time:   23:28:49
    File:   String_Game.cpp
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
        string s;
        cin >> s;
        int on = 0, one = 0;
        for (int i = 0; i < n; i++)
        {

            if (s[i] == '1')
            {
                on++;
            }
            else
            {
                one++;
            }
        }
        int p = min(on, one);
        (p % 2 == 0) ? cout << "Ramos" << '\n' : cout << "Zlatan" << '\n';
    }

    return 0;
}