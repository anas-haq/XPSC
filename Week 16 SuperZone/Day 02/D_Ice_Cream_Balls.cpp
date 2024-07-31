/*
    Author: Anas
    Date:   30-07-2024
    Time:   14:47:17
    File:   D_Ice_Cream_Balls.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t=1;
    cin >> t;

    auto Anas = [&]() {
        ll type;
        cin>>type;
        ll mid,high=2e9,low=1,midcr;
        while (high-low>1)
        {
            mid=(low+high)/2;
            midcr=(mid*(mid-1))/2;
            if(midcr<=type)
            {
                low=mid;
            }
            else
            {
                high=mid;
            }            
        }
        ll lowcr=(low*(low-1))/2;
        ll bal=type-lowcr;
        cout<<low+bal<<"\n";
        
    };

    while (t--) {
        Anas();
    }
    
    return 0;
}
