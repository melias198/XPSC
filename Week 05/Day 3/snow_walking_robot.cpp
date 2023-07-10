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

const string moves="LRUD";

void solve()
{
    string s;
    cin>>s;
    map<char,int>mp;
    for(auto ch:moves)
    {
        mp[ch]=0;
    }

    for(auto ch:s)
    {
        mp[ch]++;
    }

    int a=min(mp['U'],mp['D']);
    int b=min(mp['L'],mp['R']);

    if(min(a,b)==0)
    {
        if(a==0)
        {
            b=min(b,1);
            cout<<2*b<<'\n'<<string(b,'L')+string(b,'R')<<'\n';
        }
        else
        {
            a=min(a,1);
            cout<<2*a<<'\n'<<string(a,'U')+string(a,'D')<<'\n';
        }
    }
    else
    {
        string ans;
        ans+=string(b,'L');
        ans+=string(a,'U');
        ans+=string(b,'R');
        ans+=string(a,'D');
        cout<<ans.size()<<'\n'<<ans<<'\n';
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
