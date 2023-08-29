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
   ll n;
   cin>>n;
   vector<ll>v(n);
   for(int i=0;i<n;i++)
   {
        cin>>v[i];
   }

   ll mx=*max_element(v.begin(),v.end());
   ll sum=0;
   ll z=0;
   for(int i=0;i<n;i++)
   {
        if(v[i]==mx) continue;
        sum+=mx-v[i];
        z=__gcd(z,mx-v[i]);
        cout<<z<<" ";
   }
   cout<<'\n';
   
   ll y=sum/z;

   cout<<y<<" "<<z<<'\n';
}

int main()
{
    fast;
   // ll t;
   // cin >> t;
   // while (t--)
   // {
        solve();
   // }
    return 0;
}