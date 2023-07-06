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
    string s,t;
    cin>>s>>t;
    int n=s.size();
    map<char,int>mp;
    for(int i=0;i<t.size();i++)
    {
        mp[t[i]]++;
    }
    if(t=="a") cout<<1<<'\n';
    else if(mp['a']!=0) cout<<-1<<'\n';
    else cout<<(long long)pow(2,n)<<'\n';
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
