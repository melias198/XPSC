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
   string a,b;
   cin>>a>>b;

   if(a==b)
   {
        cout<<"YES"<<'\n';
        return;
   }

   int n=a.size();
   bool flag=false;
   for(int i=0;i<n-1;i++)
   {
        if(a[i]=='0' and b[i]=='0' and a[i+1]=='1' and b[i+1]=='1') flag = true;
   }

   if(flag) cout<<"YES"<<'\n';
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