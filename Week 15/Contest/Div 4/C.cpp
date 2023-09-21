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
   int n=10;
   char matrix[n+1][n+1];
   for(int i=1;i<=n;i++)
   {
        for(int j=1;j<=n;j++)
        {
            cin>>matrix[i][j];
        }
   }

   int ans=0;

   for(int i=1;i<=n;i++)
   {
        for(int j=1;j<=n;j++)
        {
            if(matrix[i][j]=='X')
            {
               if(i<=5)
               {
                    if(j<=5) ans+=min(i,j);
                    else ans+=min(i,11-j);
               }
               else
               {
                    if(j<=5) ans+=min(11-i,j);
                    else ans+=min(11-i,11-j);
               }
            }
        }
   }

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