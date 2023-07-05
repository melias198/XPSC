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

    map<char,int>mp;
    int j=1;
    for(char i='a';i<='z';i++,j++)
    {
        mp[i]=j;
    }

    int n=s.size();
    vector<pair<int,int>>v;

    int first=min(mp[s[0]],mp[s[n-1]]);
    int last=max(mp[s[0]],mp[s[n-1]]);

    for(int i=0;i<n;i++)
    {
        if(mp[s[i]]>=first && mp[s[i]]<=last)
        {
           v.push_back({mp[s[i]],i+1});
        }
    }
    
    if(v.size()>2)
    {
        if(mp[s[0]]>mp[s[n-1]])
        {
            sort(v.begin()+1,v.begin()+v.size()-1,greater<pair<int,int>>());
        }
        else
        {
            sort(v.begin()+1,v.begin()+v.size()-1);
        }
    }

    int cost=abs(first-last);
    
    cout<<cost<<" "<<v.size()<<'\n';
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i].second<<" ";
    }
    cout<<'\n';
}

int main()
{
    fast;
    //solve();
    ll t;
    cin >> t;
    while (t--)
    {
       solve();
    }
    return 0;
}