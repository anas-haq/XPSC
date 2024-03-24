#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x;
    cin>>n>>x;
    vector<int>v(n);
    for (int i = 0; i <n; i++)
    {
        cin>>v[i];
    }
    vector<int>k;
    for(int i=0;i<n;i++)
    {
        // for (int j = i+1; j <n; j++)
        // {
            if(v[i]!=x)
            {
                k.push_back(v[i]);
            }
        // }
        
    }
    for(int x:k)
    {
        cout<<x<<" ";
    }
    
    return 0;
}