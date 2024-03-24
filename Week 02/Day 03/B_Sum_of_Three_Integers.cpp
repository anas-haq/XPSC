#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin>>a>>b;
    int cnt=0;
    for (int i = 0; i <=a; i++)
    {
        for (int j = 0; j<=a; j++)
        {
            int ans=b-i-j;
            if(ans>=0 && ans<=a)
            {
                cnt++;
            }
        }
        
    }
    cout<<cnt<<'\n';
    
    return 0;
}