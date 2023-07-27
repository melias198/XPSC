/*
||-----------------------------------||
||           Mohammad Elias          ||
||-----------------------------------||
*/
#include <bits/stdc++.h>
#define ll long long int
#define pub push_back
#define pob pop_back
#define PI 3.14159265359
#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define cyes cout<<"Yes"<<endl
#define cno cout<<"No"<<endl
#define minus cout<<-1<<endl
using namespace std;

void solve()
{
    int n;
    cin>>n;

    int m=pow(n,2);
    int odd=1,even=2;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(odd<=m)
            {
                cout<<odd<<" ";
                odd+=2;
            }
            else if(odd>m && even<=m)
            {
                cout<<even<<" ";
                even+=2;
            }
        }
        cout<<"\n";
    }
}

int main()
{
    fast;
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
