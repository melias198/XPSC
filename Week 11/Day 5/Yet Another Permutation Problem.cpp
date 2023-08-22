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

   vector<int>visited(n+1);
   vector<int>ans;

   for(int i=1;i<=n;i++)
   {
        if(visited[i]) continue;
        int now=i;
        while(now<=n)
        {
            if(visited[now]) break;
            visited[now]=1;
            ans.push_back(now);
            now*=2;
        }
   }

   for(auto it:ans) cout<<it<<" ";
   cout<<endl;
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