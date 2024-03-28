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

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int i = 0, j = n - 1;
        bool flag = true;

        while (i < j)
        {
            if (v[i] != v[j])
            {
                flag = false;
                break;
            }
            i++;
            j--;
        }

        if (flag)
        {
            cout << "YES" << '\n';
        }
        else
        {
            int o = 0, p = n - 1;
            int a = -1, b = -1;

            while (o < p)
            {
                if (v[o] != v[p])
                {
                    a = v[o];
                    b = v[p];
                    break;
                }
                o++;
                p--;
            }

            vector<int> q = v;
            vector<int> e = v;

            q.erase(remove(q.begin(), q.end(), a), q.end());
            bool flag1 = true;
            int z = 0, x = q.size() - 1;

            while (z < x)
            {
                if (q[z] != q[x])
                {
                    flag1 = false;
                    break;
                }
                z++;
                x--;
            }

            if (flag1)
            {
                cout << "YES" << '\n';
            }
            else
            {
                e.erase(remove(e.begin(), e.end(), b), e.end());
                bool flag2 = true;
                int d = 0, w = e.size() - 1;

                while (d < w)
                {
                    if (e[d] != e[w])
                    {
                        flag2 = false;
                        break;
                    }
                    d++;
                    w--;
                }

                if (flag2)
                {
                    cout << "YES" << '\n';
                }
                else
                {
                    cout << "NO" << '\n';
                }
            }
        }
    }

    return 0;
}
