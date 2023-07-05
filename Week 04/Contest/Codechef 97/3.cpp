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
    string s,t,r;
    cin>>s>>t>>r;
    int a=s[0]-'a'+1;
    int b=t[0]-'a'+1;
    int diff=0;
    if(b>a) diff=b-a;
    if(a>b) diff=(26-a)+b;
    string ans="";
    for(int i=0;i<n;i++)
    {
        int x=r[i]-'a';
        int y=x+diff;
        if(y>=26)
        {
            y=y-26;
        }
        char s=y+'a';
        ans+=s;
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
