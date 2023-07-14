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

bool compare(const pair<int,int>&a,const pair<int,int>&b)
{
    return a.first>b.first;
}

void solve()
{
    int n,k,l;
    cin>>n>>k>>l;
    vector<pair<int,int>>playlist(n);
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        playlist[i].first=a;
        playlist[i].second=b;
    }

    sort(playlist.begin(),playlist.end(),compare);
    
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(k==0)
        {
            break;
        }
        if(playlist[i].second==l)
        {
            ans+=playlist[i].first;
            k--;
        }
    }
    if(ans==0) cout<<-1<<'\n';
    else cout<<ans<<'\n';
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
