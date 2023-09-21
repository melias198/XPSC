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

bool func(ll arr[],ll n,ll m,ll k)
{
    ll cnt=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<m)
        {
            cnt+=(m-arr[i]);
        }
    }
    return cnt<=k;
}

void solve()
{
   ll n,k;
   cin>>n>>k;

   ll arr[n];
   for(int i=0;i<n;i++) cin>>arr[i];
   
   ll l=0,h=INT_MAX,ans=INT_MAX;
   while(l<=h)
   {
        ll m=(h-l)/2+l;
        if(func(arr,n,m,k))
        {
            ans=m;
            l=m+1;
        }
        else h=m-1;
   }
   cout<<ans<<endl;
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