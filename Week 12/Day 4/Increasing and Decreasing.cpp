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
   int x,y,n;
   cin>>x>>y>>n;

   int value=n*(n-1)/2;
   if((y-x)>=value)
   {
        vector<int>v;
        v.pub(y);
        int cnt=1;
        while(true)
        {
            y-=cnt;
            cnt++;
            v.pub(y);
            if(cnt==n)
            {
                v.pob();
                v.pub(x);
                break;
            }
        }
        reverse(v.begin(),v.end());
        for(auto it:v) cout<<it<<" ";
        cout<<'\n';
   }
   else
   {
        cout<<-1<<'\n';
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