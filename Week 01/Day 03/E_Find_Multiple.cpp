#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, p;
    cin >> n >> m >> p;
    vector<int> k;
    int a = 0;
    int d = 1;
    while (  a <= m )
    {        
        a = (p * d);
        k.push_back(a);
        d++;
    }
    for(int i=0;i<k.size();i++)
    {
        if(n<= k[i] && m>= k[i] )
        {
            cout<<k[i];
            return 0;
        }
    }
    cout << "-1";

    return 0;
}