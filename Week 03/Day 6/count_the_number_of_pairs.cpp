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
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int small[26]={0};
    int big[26]={0};
    for(int i=0;i<n;i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            small[s[i]-'a']++;
        }
        else
        {
            big[s[i]-'A']++;
        }
    }

    int ans=0;

    for(int i=0;i<26;i++)
    {
        int pairs=min(small[i],big[i]);
        ans+=pairs;
        small[i]-=pairs; big[i]-=pairs;
        int mx=min(k,max(small[i],big[i])/2);
        k-=mx;
        ans+=mx;
    }
    cout<<ans<<'\n';
}

int main()
{
    fast;
   // solve();
    ll t;
    cin >> t;
    while (t--) 
    {
       solve();
    }
    return 0;
}
