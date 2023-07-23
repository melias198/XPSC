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
    int n,x;
    cin>>n>>x;

    int lim=0;
    if(x<0)lim=n-1;
    else lim=n+1;

    if(abs(x)>lim)
    {
        cout<<"-1\n";
    }
    else
    {
        string ans="";
        if(x>0)
        {
            int cnt=1;
            while(n--)
            {
                if(cnt==x) ans+='*';
                else
                {
                   ans+='+';
                   cnt++;
                }
            }
        }
        else
        {
            int cnt=1;
            while(n--)
            {
                if(cnt==x) ans+='*';
                else
                {
                    ans+='-';
                    cnt--;
                }
            }
        }

        cout<<ans<<'\n';
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
