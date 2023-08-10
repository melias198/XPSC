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
   int sz=s.size();
   if(sz%2==0)
   {
       string part1="",part2="";
       for(int i=0;i<sz/2;i++)
       {
            part1+=s[i];
       }

       for(int i=sz/2;i<sz;i++)
       {
            part2+=s[i];
       }

       if(part1==part2) cout<<"YES"<<'\n';
       else cout<<"NO"<<'\n';
   }
   else
   {
       cout<<"NO"<<'\n';
   }
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