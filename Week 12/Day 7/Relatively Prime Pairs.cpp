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
   ll l,r;
   cin>>l>>r;

   ll tot=((r-l)+1)/2;

   cout<<"YES"<<'\n';

   while(tot)
   {
       // cout<<l++<<" "<<l++<<'\n'; //commented for due to yellow mark in vs code
        tot--;
   }
}

int main()
{
    fast;
  //  ll t;
  //  cin >> t;
  //  while (t--)
   // {
        solve();
  //  }
    return 0;
}