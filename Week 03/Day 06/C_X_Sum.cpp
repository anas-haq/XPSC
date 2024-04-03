#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=205;
ll n,m;
int a[N][N];
vector<pair<int,int>> v={{-1,-1},{1,1},{-1,1},{1,-1}};
bool valid(ll i,ll j)
{
    return (i>=0 && j>=0 && i<n&& j<m );
}
ll dfs(ll i,ll j)
{
    ll sum=a[i][j];
    for(int k=0;k<4;k++)
    {
        ll ci=v[k].first+i;
        ll cj=v[k].second+j;
        while(valid(ci,cj))
        {
            sum+=a[ci][cj];
            ci+=v[k].first;
            cj+=v[k].second;
            
        }
    }
    return sum;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        ll mx=LLONG_MIN,sum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                
                
                sum= dfs(i,j);
                mx=max(mx,sum);
                
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}