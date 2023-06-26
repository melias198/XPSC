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
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++)
    {
        v[i].first=mp[s[i]];
        v[i].second=i+1;
    }
    int first=mp[s[0]],last=mp[s[n-1]];
    if(first>last)
    {
        sort(v.begin(),v.end(),greater<pair<int,int>>());
    }
    else
    {
        sort(v.begin(),v.end());
    }
    vector<int>ans;
    int cost=0,jump=0;
    bool flag=false;
    int i;
    for(i=1;i<v.size();i++)
    {
        if(v[i-1].first==first || flag)
        {
            flag=true;
            cost+=abs(v[i].first-v[i-1].first);
            ans.push_back(v[i-1].second);
            jump++;
        }
    }
   // jump++;
    ans.push_back(v[n-1].second);
    
    cout<<cost<<" "<<ans.size()<<'\n';
    for(auto it:ans)
    {
        cout<<it<<" ";
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
