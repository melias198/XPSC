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
    string s;
    cin>>s;
    int n=s.size();
    vector<int>pos;
    pos.push_back(0);
    for(int i=0;i<n;i++)
    {
        if(s[i]=='R')
        {
            pos.push_back(i+1);
        }
    }
    pos.push_back(n+1);

    int m=pos.size();
    int ans=0;
    for(int i=0;i<m-1;i++)
    {
        ans=max(ans,pos[i+1]-pos[i]);
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
