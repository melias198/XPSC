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

int n;
const int INF = 1e9;
const int N = 1e5;
vector<pair<int,int>>adja_list[N];
int visited[N];
int d[N];

void dijkstra(int src)
{
    for (int i = 1; i <= n; i++)
    {
        d[i] = INF;
    }
    d[src]=0;

    for(int i=0;i<n;i++)
    {
        int selected_node=-1;
        for(int j=1;j<=n;j++)
        {
            if(visited[j] == 1)
            {
                continue;
            }
            if(selected_node == -1 || d[selected_node] > d[j])
            {
                selected_node=j;
            }
        }
        visited[selected_node] = 1;

        for(auto adja_entry:adja_list[selected_node])
        {
            int adj_node=adja_entry.first;
            int edges_cost=adja_entry.second;

            if(d[selected_node]+edges_cost < d[adj_node])
            {
                d[adj_node]= d[selected_node]+edges_cost;
            }
        }
    }
}



void solve()
{
   int k,a,b;
   cin>>n>>k>>a>>b;

   vector<int>x(n+1),y(n+1);
   for(int i=1;i<=n;i++)
   {
        cin>>x[i]>>y[i];
   }

   visited[N]={0};

   for (int i=1; i<=N; i++) 
   {
        adja_list[i].clear(); 
   }


   for(int u=1;u<=n;u++)
   {
        for(int v=u;v<=n;v++)
        {
            if(u!=v)
            {
                int w=abs(x[u]-x[v])+abs(y[u]-y[v]);
                if(u<=k and v<=k) w=0;
                adja_list[u].push_back({v,w});
                adja_list[v].push_back({u,w});
            }
        }
   }

   int src=a;

   dijkstra(src);

   cout<<d[b]<<'\n';

/*
   for(int it=1;it<=n;it++)
   {
        for(auto jt:adja_list[it])
        {
            cout<<it<<"->"<<jt.first<<"="<<jt.second<<'\n';
        }
   }
*/

   

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