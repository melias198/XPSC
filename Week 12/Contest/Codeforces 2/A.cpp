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
   int n,a,q;
   cin>>n>>a>>q;

   string s;
   cin>>s;

   int count = a;
   int tot = a;

   bool cross = false;

   if(n==a) cross=true;

   for(int i=0;i<q;i++)
   {
       if(s[i]=='+')
       {
          count++;
          tot++;
          if(count>=n) cross=true;
       }
       else count--;
   }

   if(tot>=n)
   {
      if(cross) cout<<"YES"<<'\n';
      else cout<<"MAYBE"<<'\n';
   }
   else cout<<"NO"<<'\n';
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