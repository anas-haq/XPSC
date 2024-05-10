/*
    Author: Anas
    Date:   10-05-2024
    Time:   19:15:47
    File:   B_Swap_and_Delete.cpp
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
        string s;
        cin >> s;
        n = s.size();
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x = s[i] - '0';
            v.push_back(x);
        }
        // sort(v.rbegin(), v.rend());
        int cnt = 0, cnt1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0)
            {
                cnt++;
            }
            else
                cnt1++;
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 1)
            {
                
                if (cnt > 0)
                {
                    // ans = n - i;
                    cnt--;
                    // break;
                }
                else
                {
                    break;
                }
                // cout<<cnt<<" ";
            }
            else
            {
                // cnt1--;
                if (cnt1 >0)
                {
                    // ans = n - i;
                    // break;
                    cnt1--;
                }
                else
                {
                    break;
                }
                
            }
            // else
            // {
            //     ans=n-i;
            //     break;
            // }
            // cout<<'\n';
        }
        cout << cnt+cnt1 << '\n';
    }

    return 0;
}