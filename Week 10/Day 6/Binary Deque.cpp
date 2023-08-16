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
   int n,s;
   cin>>n>>s;
   vector<int>v(n);
   ll sum=0;
   for(int i=0;i<n;i++)
   {
       cin>>v[i];
       sum+=v[i];
   }

   if(sum==s)
   {
        cout<<0<<'\n';
        return;
   }

   if(sum<s)
   {
        cout<<-1<<'\n';
        return;
   }

   int l=0,r=0,cnt=0;
   int ans=-1;
   while(r<n)
   {
      cnt+=v[r];
      if(cnt<s)
      {
         r++;
      }
      else
      {
         ans=max(ans,(n-(r-l+1)));
         cnt-=v[l];
         l++;
         r++;
      }
   }

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