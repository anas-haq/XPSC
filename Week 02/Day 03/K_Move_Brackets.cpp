#include<bits/stdc++.h>
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
        int a = 0, b = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                b++;
            }
            else
            {
                b--;
            }
            if (b < 0)
            {
                b = 0;
                a++;
            }
        }
        cout << a << "\n";
    }
    return 0;
}
