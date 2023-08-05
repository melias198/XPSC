#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,m,k;
    cin>>n>>m>>k;

    vector<ll>v(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }

    vector<pair<int,int>>range(m+1);
    vector<ll>value(m+1);
    for(int i=1;i<=m;i++)
    {
        int l,r,d;
        cin>>l>>r>>d;
        range[i]={l,r};
        value[i]=d;
    }

    ll prefix[m+1]={0};
    for(int i=1;i<=k;i++)
    {
        int x,y;
        cin>>x>>y;
        prefix[x]++;
        prefix[y+1]--;
    }

    ll sum=0;
    for(int i=1;i<=m;i++)
    {
        sum+=prefix[i];
        value[i]=value[i]*sum;
    }

    ll ans[n+1]={0};
    for(int i=1;i<=m;i++)
    {
        int a=range[i].first;
        int b=range[i].second;

        ans[a]+=value[i];
        ans[b+1]-=value[i];
    }

    ll tmp=0;
    for(int i=1;i<=n;i++)
    {
        tmp+=ans[i];
        cout<<tmp+v[i]<<" ";
    }
    cout<<'\n';

    return 0;
}