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
   vector<pair<int,int>>v;
   for(int i=0;i<n;i++)
   {
        int x;
        cin>>x;
        v.push_back({x,i});
   }

   sort(v.begin(),v.end());

   int per=n;
   for(int i=0;i<n;i++)
   {
       v[i].first=per;
       per--;
   }

   vector<int>ans(n);
   for(int i=0;i<n;i++)
   {
        ans[v[i].second]=v[i].first;
   }

   for(auto it:ans) cout<<it<<" ";
   cout<<'\n';


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