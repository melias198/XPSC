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

//unsolved
void solve()
{
   ll n,x,y;
   cin>>n>>x>>y;

   ll div_comm=n/(x*y);
   ll div_xx=n/x;
   ll div_yy=n/y;

   ll div_x=div_xx-div_comm;
   ll div_y=div_yy-div_comm;

   ll a=n-div_x;
   ll sum_x=((n*(n+1))/2)-((a*(a+1))/2);
   ll sum_y=((div_y*(div_y+1))/2);

   ll ans=sum_x-sum_y;
   cout<<ans<<'\n';
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