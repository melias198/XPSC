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
    string s;
    cin>>s;
    map<string,int>mp;
    string ans="NO";
    for(int i=0;i<n-1;i++)
    {
        string st="";
        st+=s[i];
        st+=s[i+1];
        if(mp.find(st)==mp.end())
        {
            mp[st]=i;
        }
        else
        {
            if(mp[st]!=i-1)
            {
                ans="YES";
                break;
            }
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
