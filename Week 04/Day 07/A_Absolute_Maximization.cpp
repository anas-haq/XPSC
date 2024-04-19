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
        int a=INT_MAX,b=0;
        vector<int>v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            a=a&v[i];
            b=b|v[i];
            
        }
        cout<<b-a<<'\n';
        
    }
    
    return 0;
}