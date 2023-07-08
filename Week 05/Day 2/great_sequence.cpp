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
    ll n,x;
    cin>>n>>x;
    vector<ll>v(n+1);
    map<ll,int>mp;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
        mp[v[i]]++;
    }

    sort(v.begin()+1,v.end());
    int ans=0;
    for(int i=1;i<=n;i++)
    {
       if(mp[v[i]]==0) continue;
       if(mp[v[i]*x]!=0)
       {
        mp[v[i]]--;
        mp[v[i]*x]--;
       } 
       else
       {
        ans++;
        mp[v[i]]--;
       }
    }

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
