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
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>>v(m);
    for(int i=0;i<m;i++)
    {
        int l,r;
        cin>>l>>r;
        v[i]={l,r};
    }
    int q;
    cin>>q;
    vector<int>cq(q);
    for(int i=0;i<q;i++)
    {
        cin>>cq[i];
    }
    int ans[n]={0};
    bool flag=false;
    int cnt=0;
    for(int i=0;i<q;i++)
    {
        ans[cq[i]-1]=1;
        for(int j=0;j<m;j++)
        {
            int ones=0;
            int zeros=0;
            int a=v[j].first-1;
            int b=v[j].second-1;
            for(int k=a;k<=b;k++)
            {
                if(ans[k]==1) ones++;
                else zeros++;
            }
            if(ones>zeros)
            {
                cnt=i+1;
                flag=true;
                i=n+j;
                break;
            }
        }
    }
    if(flag) cout<<cnt<<'\n';
    else cout<<-1<<'\n';
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
