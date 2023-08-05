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
   string s;
   cin>>s;
   map<char,int>mp;
   for(int i=0;i<int(s.size());i++)
   {
      mp[s[i]]++;
   }
   
   string ans="";
   for(auto it:mp)
   {
       char ch=it.first;
       int n=it.second;
       ans.append(n,ch);
   }

   string res=ans;
   reverse(res.begin(),res.end());

   cout<<ans+res<<'\n';

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