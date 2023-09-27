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
   int n,k;
   cin>>n>>k;

   vector<int>v(n);
   map<int,int>mp;
   for(int i=0;i<n;i++) 
   {
      cin>>v[i];
      mp[v[i]]++;
   }

   bool flag=false;
   if(mp[k]>0) flag = true;

   if(flag) yes;
   else no;

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