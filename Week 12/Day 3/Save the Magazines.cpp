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

   string s;
   cin>>s;

   vector<int>v(n);
   for(int i=0;i<n;i++)
   {
        cin>>v[i];
   }

   ll sum=0;

   if(s[0]=='1') sum+=v[0];

   for(int i=1;i<n;i++)
   {
       if(s[i]=='1' and s[i-1]!='1')
       {
            sum+=max(v[i],v[i-1]);
            if(v[i-1]>v[i])
            {
                s[i]='0';
            }
       }
       else if(s[i]=='1' and s[i-1]==1) sum+=v[i];
   }

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