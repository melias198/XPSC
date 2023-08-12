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

   int l;
   cin>>l;
   int mn=INT_MAX;
   int sum=0;
   for(int i=0;i<l;i++)
   {
      int x;
      cin>>x;
      if(mn>x) mn=x;
   }

   for(int i=1;i<n;i++)
   {
      map<int,int>mp;
      cin>>l;
      for(int i=0;i<l;i++)
      {
         int x;
         cin>>x;
         if(mn>x) mn=x;
         mp[x]++;
      }

      const auto val=next(mp.begin())->first;
      sum+=val;
   }

   sum+=mn;
   cout<<sum<<'\n';
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