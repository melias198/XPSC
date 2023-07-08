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
    int n;
    cin>>n;
    vector<string>s(n);
    for(int i=0;i<n-2;i++)
    {
        cin>>s[i];
    }

    string ans="";
    bool flag=true;
    ans+=s[0][0];
    for(int i=0;i<n-3;i++)
    {
        if(s[i][1]==s[i+1][0])
        {
            ans+=s[i+1][0];
        }
        else
        {
            ans+=s[i][1];
            ans+=s[i+1][0];
            flag=false;
        }
    }
    ans+=s[n-3][1];
    if(flag) ans+='b';
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