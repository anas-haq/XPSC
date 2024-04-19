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
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for (int i = 0; i <n; i++)
        {
            cin>>v[i];
        }
        int ans=-1;
        for (int i = 0; i <n; i++)
        {
            if((v[i]&k)==k)
            {
                ans&=v[i];
            }
        }
        if(ans==k)
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            cout<<"NO"<<'\n';
        }       
        
        
    }
    
    return 0;
}