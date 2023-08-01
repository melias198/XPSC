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
    int n,q;
    cin>>n>>q;
    vector<int>v(n+1);
    ll sum=0;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
        sum+=v[i];
    }

    vector<int>prefix_sum(n+1);
    prefix_sum[1]=v[1];
    for(int i=2;i<=n;i++)
    {
        prefix_sum[i]=prefix_sum[i-1]+v[i];
    }


    for(int i=0;i<q;i++)
    {
        int l,r,k;
        cin>>l>>r>>k;
        ll temp=prefix_sum[r]-prefix_sum[l-1];
        ll ans=sum-temp;
        ans+=k*(r-l+1);

        if(ans&1) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
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
