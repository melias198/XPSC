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
   int r,g,b;
   cin>>r>>g>>b;
   priority_queue<int>pq;
   pq.push(r),pq.push(g),pq.push(b);
   int a=pq.top(); pq.pop();
   int bl=pq.top(); pq.pop();
   int c=pq.top(); pq.pop();

   int sum=bl+c;
   if(a>=sum)
   {
        cout<<sum<<'\n';
        return;
   }

   int ans=(a+bl+c)/2;
   cout<<ans<<'\n';
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