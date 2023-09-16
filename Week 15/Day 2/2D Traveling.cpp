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
   int n,k,a,b;
   cin>>n>>k>>a>>b;

   vector<int>x(n+1),y(n+1);
   for(int i=1;i<=n;i++)
   {
        cin>>x[i]>>y[i];
   }

   vector<pair<int,int>>adja_list[n];

   for(int u=1;u<=n;u++)
   {
        for(int v=1;v<=n;v++)
        {
            if(u!=v)
            {
                int w=abs(x[u]-x[v])+abs(y[u]-y[v]);
                adja_list[u].push_back({v,w});
                adja_list[v].push_back({u,w});
            }
        }
   }

   

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