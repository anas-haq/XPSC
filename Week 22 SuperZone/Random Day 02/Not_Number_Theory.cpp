#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int bit_out(int n)
{
    int count = 0;
    for (int i = 0; i < 31; i++)
    {
        if ((n >> i) & 1)
            count++;
    }
    return count;
}

void solve()
{
    string s;
    cin >> s;
    int n = 0;
    int mx = 0;
    for (int i = 1; i < 1e6; i++)
    {
        string a = to_string(i);
        if (a.size() == s.size())
        {
            bool f = true;
            for (int j = 0; j < a.size(); j++)
            {
                if (s[j] != '?' && s[j] != a[j])
                    f = false;
            }
            if (!f)
                continue;
            else
            {
                int bit = bit_out(i);
                if (mx <= bit)
                {
                    // cout<<a<<" "<<i<<" "<<bit<<" "<<endl;
                    mx = bit;
                    n = max(n, i);
                    // cout<<i<<" ";
                }
            }
        }
        if (a.size() > s.size())
            break;
    }
    cout << n << endl;
}
int main()
{
    /*
        Author: FRK
        Date:   26-09-2024
        Time:   16:15:04
        File:   Not_Number_Theory.cpp
    */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}