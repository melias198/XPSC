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
ll n;
vector<ll>v;

void solve()
{
   cin>>n;
   v.resize(n);

   for(int i=0;i<n;i++) cin>>v[i];
   sort(v.begin(),v.end());

   ll q;
   cin>>q;
   while(q--)
   {
        ll l,r;
        cin>>l>>r;
        auto it1=upper_bound(v.begin(),v.end(),r);
        auto it2=lower_bound(v.begin(),v.end(),l);
        cout<<it1-it2<<" ";

        
   }
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