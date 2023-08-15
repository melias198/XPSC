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
   int n,l,r,k;
   cin>>n>>l>>r>>k;

   vector<int>v(n);
   for(int i=0;i<n;i++)
   {
        cin>>v[i];
   }

   sort(v.begin(),v.end());

   int cnt=0;
   for(int i=0;i<n;i++)
   {
        if(v[i]>l and v[i]<r)
        {
            k-=v[i];
            if(k>=0)
            {
               cnt++;
            }
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