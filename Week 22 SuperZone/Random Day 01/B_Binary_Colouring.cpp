/*
    Author: Anas
    Date:   24-09-2024
    Time:   19:20:57
    File:   B_Binary_Colouring.cpp
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

        for (int i = 0; i < (1 << n); i++)
        {
            for (int k = 0; k < n; k++)
            {
                if ((i >> k) & 1)
                {
                    cout << 1 << " ";
                }
                else
                {
                    cout << 0 << " ";
                }
            }
            cout << '\n';
        }
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
