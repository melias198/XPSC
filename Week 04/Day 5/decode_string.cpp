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

    map<int,char>mp;
    char j='a';
    for(int i=1;i<=26;i++,j++)
    {
        mp[i]=j;
    }

    string ans="";
    for(int i=n-1;i>=0;i--) 
    {
        if(s[i]=='0')
        {
            if(i>=2)
            {
                int a=s[i-1]-'0';
                int b=s[i-2]-'0';
                int m=(b*10)+a;
                ans+=mp[m];
            }
            i-=2;
        }
        else
        {
            int m=s[i]-'0';
            ans+=mp[m];
        }
    }
    reverse(ans.begin(),ans.end());
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
