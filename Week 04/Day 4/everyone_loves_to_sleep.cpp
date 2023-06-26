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
    int n,h,m;
    cin>>n>>h>>m;
    int ans=INT_MAX;
    for(int i=0;i<n;i++)
    {
        int hr,mn;
        cin>>hr>>mn;
        int cnt=0;
        int hours=h;
        int minute=m;
        while(true)
        {
            if(hours==hr && minute==mn)
            {
                break;
            }
            cnt++;
            minute++;
            if(minute==60)
            {
                minute=0;
                hours++;
                if(hours==24)
                {
                    hours=0;
                }
            }
        }
        ans=min(ans,cnt);
    }
   
    cout<<ans/60<<" "<<ans%60<<'\n';
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
