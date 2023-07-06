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
map<string,int>mp;

void solve()
{
    string s;
    cin>>s;
    cout<<mp[s]<<'\n';
}

int main()
{
    fast;
    int idx=1;
    for(char i='a';i<='z';i++)
    {
        for(char j='a';j<='z';j++)
        {
            string ans="";
            if(i!=j)
            {
                ans+=i;
                ans+=j;
                mp[ans]=idx;
                idx++;
            }
        }
    }

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
