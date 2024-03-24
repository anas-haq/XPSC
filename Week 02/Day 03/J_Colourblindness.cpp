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
        string a,b;
        cin>>a>>b;
        bool flag=true;
        for (int i = 0; i <n; i++)
        {
            if((a[i]=='G'||a[i]=='B') && (b[i]=='G' || b[i]=='B'))
            {
                flag=true;
            }
            else if(a[i] != b[i])
            {
                flag=false;
                break;
            }
           
        }
        if(flag==true) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
        
    }
    
    return 0;
}
