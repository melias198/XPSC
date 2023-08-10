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
   vector<int>v(n);
   for(int i=0;i<n;i++)
   {
      cin>>v[i];
   }
   
   ll sum1=0,sum2=0,ans=0;
   int l=0,r=n-1;

   while(l<=r)
   {
       if(sum1<sum2) sum1+=v[l++];
       else sum2+=v[r--];
       if(sum1==sum2) ans=sum1;
   }

   cout<<ans<<'\n';

}

int main()
{
    fast;
   // ll t;
  //  cin >> t;
  //  while (t--)
   // {
        solve();
   // }
    return 0;
}