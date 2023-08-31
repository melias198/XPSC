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
   vector<pair<ll,ll>>v(n+1);
   for(int i=1;i<=n;i++)
   {
        cin>>v[i].first;
        v[i].second=i;
   }

   sort(v.begin(),v.end());

   ll cnt=0;
   for(int i=1;i<=n;i++)
   {
        for(int j=i+1;j<=n;j++)
        {
           if(v[i].first*v[j].first>2*n) break;
           if(v[i].first*v[j].first==v[i].second+v[j].second) cnt++;
        }
   }

   cout<<cnt<<'\n';
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