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

    map<char,int>mp;
    for(char ch='a';ch<='z';ch++)
    {
        mp[ch]=-1;
    }
    for(int i=0;i<n;i++)
    {
       if(mp[s[i]]==-1)
       {
           mp[s[i]]=(i%2);
       }
       else
       {
           if(mp[s[i]]!=(i%2))
           {
              cout<<"NO"<<'\n';
              return;
           }
       }
    }

    cout<<"YES"<<'\n';
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
