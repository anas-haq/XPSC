/*
    Author: Anas
    Date:   09-05-2024
    Time:   20:50:04
    File:   J_Divisible_Array.cpp
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
     int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 2; i <=2*n; i+=2)
        {
            cout << i <<" "; 
        }
        cout << "\n";
    }
    return 0;
}