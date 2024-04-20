#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        string s, t;
        cin >> s;
        for (int i = n-1; i>=0; i--)
        {
            int a=s[i]-'0';
            char b=a+96;
            if(a!=0)
            {
                t.push_back(b);
            }
            else
            {                
                string d = {s[i -2], s[i -1]};
                int p = stoi(d);
                b=p+96;
                t.push_back(b);
                i-=2;
            }            
        }
        reverse(t.begin(),t.end());
        cout << t << '\n';
    }

    return 0;
}
