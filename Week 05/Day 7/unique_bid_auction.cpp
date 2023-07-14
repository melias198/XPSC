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
   vector<int>v(n+1),idx(n+1);
   map<int,int>mp;
   for(int i=1;i<=n;i++)
   {
      cin>>v[i];
      mp[v[i]]++;
      idx[v[i]]=i;
   }

   int ans=-1;
   for(auto it:mp)
   {
      if(it.second==1)
      {
        ans=idx[it.first];
        break;
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
