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
   ll n;
   cin>>n;

   vector<ll>v(n);
   for(int i=0;i<n;i++) cin>>v[i];

   ll cnt=0;
   if(v[0]==1) cnt=2;
   else cnt=1;

   for(int i=1;i<n;i++)
   {
        cnt++;
        if(v[i]==cnt) cnt++;
   }

   cout<<cnt<<endl;
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