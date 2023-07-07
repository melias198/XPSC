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
    if(n%2==0)
    {
        cout<<0<<'\n';
    }
    else
    {
        string s=to_string(n);
        if((s[0]-'0')%2==0)
        {
            cout<<1<<'\n';
            return;
        }
        
        int len=s.size();
        int cnt=-1;
        for(int i=0;i<len;i++)
        {
            int a=s[i]-'0';
            if(a%2==0)
            {
                cnt=2;
                break;
            }
        }
        cout<<cnt<<'\n';
    }
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
