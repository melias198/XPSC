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

   vector<int>a(n),b(n);
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }

   for(int i=0;i<n;i++)
   {
       cin>>b[i];
   }

   int l=-1,r=-1;
   for(int i=0;i<n;i++)
   {
      if(a[i]!=b[i])
      {
         l=i+1;
         while(i<n-1 && a[i]!=b[i])
         {
            i++;
         }
         r=i+1;
         break;
      }
   }

   cout<<l<<" "<<r<<'\n';
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