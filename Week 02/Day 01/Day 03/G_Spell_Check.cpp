#include <bits/stdc++.h>
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
        string s = "Timur";
        sort(s.begin(), s.end());
        string a;
        cin >> a;
        sort(a.begin(), a.end());
        bool flag = true;
        if (n > 4)
        {

            for (int i = 0; i < n; i++)
            {
                if (s[i] != a[i])
                {
                    flag = false;
                    break;
                }
            }
        }
        else
        {
            cout << "NO" << '\n';
            continue;
        }
        if (flag == true)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}