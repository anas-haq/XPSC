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
        vector<int> v(n);
        int a = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (i == 0)
            {
                a = v[i];
            }
            else
            {
                a = a & v[i];
            }
        }

        cout << a << '\n';
    }

    return 0;
}
