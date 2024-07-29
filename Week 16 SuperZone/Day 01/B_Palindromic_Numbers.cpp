/*
    Author: Anas
    Date:   28-07-2024
    Time:   15:21:19
    File:   B_Palindromic_Numbers.cpp
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
        ll n, i, m;
        string s;
        cin >> n >> s;
        string ans(n, '.');
        if (s[0] == '9')
        {
            ll carry = 0;

            for(i=n-1;i>=0;i--)
            {
                m=carry+(s[i]-'0');
                if(m>1)
                {
                    carry=1;
                    m=11-m;
                }
                else
                {
                    carry=0;
                    m=1-m;
                }
                ans[i]=char('0'+m);
            }
        }
        else
        {
            for (i = n - 1; i >= 0; i--)
            {
                m = 9 - (s[i] - '0');
                ans[i] = char('0' + m);
            }
        }
        cout << ans << '\n';
    };

    while (t--)
    {
        Anas();
    }

    return 0;
}
