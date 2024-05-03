#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        int h, n;
        cin >> h >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        int ans = 0, count = 0, cat = 0;
        for (int i = 0; i < n; i++)
        {
            if (cat < v[i])
            {
                cat += (h - v[i]);
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}