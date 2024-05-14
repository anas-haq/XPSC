/*
    Author: Anas
    Date:   14-05-2024
    Time:   20:06:33
    File:   A_Bachgold_Problem.cpp
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n / 2 << "\n";
        int k = 2;
        while (k <= n)
        {
            cout << 2 << " ";
            k += 2;
        }
    }
    else
    {
        cout << n / 2 << '\n';
        int k = 3;
        cout << 3 << " ";
        while (k < n)
        {
            k += 2;
            cout << 2 << " ";
        }
    }

    return 0;
}