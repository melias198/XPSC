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

   vector<int>v(n+1);
   for(int i=1;i<=n;i++)
   {
       cin>>v[i];
   }

   bool flag=true;

   for(int i=1;i<=n;i++)
   {
       int val=v[i];
       int cnt=0;
       for(int j=1;j<=n;j++)
       {
           if(v[j]>i-1) cnt++;
       }
       if(cnt!=val) 
       {
           flag=false;
           break;
       }
   }

   if(flag) cout<<"YES"<<'\n';
   else cout<<"NO"<<'\n';

/*
   bool flag=false;
   for(int i=0;i<n-1;i++)
   {
        if(v[i]>=v[i+1]);
        else 
        {
            flag=true;
            break;
        }
   }
   if(flag==false and v[n-2]>=v[n-1]);
   else flag=true;

   if(flag)
   {
       cout<<"NO"<<'\n';
       return;
   }

   int ans=v[0];

   if(ans==n) cout<<"YES"<<'\n';
   else cout<<"NO"<<'\n';

   */
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