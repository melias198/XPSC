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
   int n,k,x;
   cin>>n>>k>>x;
   if(k>n or (k>x and abs(k-x)>=2))
   {
        cout<<-1<<'\n';
        return;
   }

   int sum=0;
   for(int i=0;i<k;i++)
   {
        sum+=i;
   }

   if(k==x) sum+=(x-1)*(n-k);
   else sum+=x*(n-k);

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