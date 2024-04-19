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
        vector<int>v;
        int cur=n-1;
        while (cur!=0)
        {
            if(__lg(n-1)!=(__lg(cur)))
            {
                break;
            }
            else
            {
                v.push_back(cur);
                cur--;
            }
            
        }
        for (int i = 0; i <=cur; i++)
        {
            v.push_back(i);
        }
        for (auto i:v)
        {
            cout<<i<<" ";
        }
        cout<<'\n';
        
        
        
        
    }
    
    return 0;
}