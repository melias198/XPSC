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
    int n,k;
    cin>>n>>k;
    map<int,multiset<int>>mp;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
       // mp[x].insert(mp[x].begin(), i);
        mp[x].insert(i);
    }

    for(int i=0;i<k;i++)
    {
        int a,b;
        cin>>a>>b;
        if(mp[a].size()==0 || mp[b].size()==0)
        {
            cout<<"NO"<<'\n';
            continue;
        }
        int s1=*mp[a].begin();
        int s2=*mp[b].rbegin();
        if(s1<s2) cout<<"YES"<<'\n';
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