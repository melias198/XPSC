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
    int p;
    cin>>p;
    int sum=0;
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        sum+=(s[i]-'a'+1);
    }
    string t(s);
    sort(t.rbegin(),t.rend());
    map<char,int>mp;
    int m=t.size();
    for(int i=0;i<m;i++)
    {
        if(sum>p)
        {
            mp[t[i]]++;
            sum-=t[i]-'a'+1;
        }
    }

    for(int i=0;i<n;i++)
    {
        if(mp[s[i]]>0)
        {
            mp[s[i]]--;
            continue;
        }
        cout<<s[i];
    }

    cout<<'\n';
    
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
