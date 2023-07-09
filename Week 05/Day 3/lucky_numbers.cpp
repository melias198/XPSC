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
    int l,r;
    cin>>l>>r;
    int ans=0;
    map<int,int>mp;
    for(int i=l;i<=r;i++)
    {
        string s=to_string(i);
        int n=s.size();
        int a=s[0]-'0',b=s[n-1]-'0';
        int x=abs(a-b);
        ans=max(ans,x);
        mp[x]=i;
    }

    cout<<mp[ans]<<'\n';
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
