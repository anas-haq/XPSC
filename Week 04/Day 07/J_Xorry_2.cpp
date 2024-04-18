#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int i = 31;
        int one = 0;
        while (i >= 0)
        {
            if ((n & (1 << i)))
            {
                one++;
            }
            if (one == 2)
            {
                break;
            }
            i--;
        }
        int cnt = 0;
        while (i >= 0)
        {
            if ((n & (1 << i)) == 0)
            {
                cnt++;
            }
            i--;
        }
        cout << (1 << cnt) << endl;
    }
    return 0;
}