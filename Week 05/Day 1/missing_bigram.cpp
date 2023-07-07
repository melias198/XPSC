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

    vector<string>v(n);
    for(int i=0;i<n-1;i++)
    {
        if(s[i][1]==s[i+1][0])
        {
            v[i]=s[i];
        }
        else if(i==n-2)
        {
            v[i]+=s[i][1];
            v[i]+=s[i][1];
        }
        else
        {
            v[i]=s[i];
            v[i+1]+=s[i][1];
            v[i+1]+=s[i][0];
            v[i+2]=s[i+1];
            i+=2;
        }
    }

    string ans="";
    ans+=v[0][0];
    for(int i=0;i<n-2;i++)
    {
        if(v[i][1]==v[i+1][0])
        {
            ans+=v[i][1];
        }
    }
    ans+=v[n-2][1];
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
