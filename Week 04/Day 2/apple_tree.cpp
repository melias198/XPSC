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
vector<ll>v[200005];
ll leaf[200005];
bool visited[200005];

ll count_leaf(ll src)
{
    visited[src]=true;
    ll ans=0;
    bool flag=true;
    for(auto adj_node:v[src])
    {
        if(!visited[adj_node])
        {
            flag=false;
            ans+= count_leaf(adj_node);
        }
    }
    if(flag)
    {
        return leaf[src]=1;
    }
    else
    {
        return leaf[src]=ans;
    }
}

void solve()
{
    ll n;
    cin>>n;
    ll edge=n-1;
    memset(visited,false,sizeof(visited));
    memset(leaf,0,sizeof(leaf));
    while(edge--)
    {
        ll a,b;
        cin>>a>>b;
        v[a].pub(b);
        v[b].pub(a);
    }

    count_leaf(1);

    ll q;
    cin>>q;
    while(q--)
    {
        ll x,y;
        cin>>x>>y;
        cout<<leaf[x]*leaf[y]<<'\n';
    }

    for(ll i=1;i<=n;i++)
    {
        v[i].clear();
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
