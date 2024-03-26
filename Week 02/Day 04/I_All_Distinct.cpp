#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        set<int>s;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            s.insert(v[i]);
        }
        int a=n-s.size();
        if(a%2==0)
        {
            cout<<s.size()<<'\n';
        }
        else
        {
            cout<<s.size()-1<<'\n';
        }
    }
    return 0;
}
