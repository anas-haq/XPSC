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
        string a[3][n];
        map<string,int>mp;
        for (int i = 0; i <3; i++)
        {
            for (int j = 0; j <n ; j++)
            {
                cin>>a[i][j];
                mp[a[i][j]]++;
            }            
        }
        
        for (int i = 0; i <3; i++)
        {
            int ans=0;
            for (int j=0;j<n;j++)
            {
                if(mp[a[i][j]]==1)
                {
                    ans+=3;
                }
                else if(mp[a[i][j]]==2)
                {
                    ans+=1;
                }
            }
            cout<<ans<<" ";
            
        }
        cout<<'\n';
        
        
        
    }
    
    return 0;
}