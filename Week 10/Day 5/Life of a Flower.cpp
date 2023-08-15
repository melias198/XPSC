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
   vector<int>v(n);
   for(int i=0;i<n;i++)
   {
       cin>>v[i];
   }

   bool flag=true;
   int cnt=1;
   if(v[0]==1) cnt++;
   for(int i=1;i<n;i++)
   {
        if(v[i]==1 and v[i-1]==1)
        {
            cnt+=5;
        }
        else if(v[i]==1)
        {
            cnt+=1;
        }
        if(v[i]==0 and v[i-1]==0)
        {
            flag=false;
            break;
        }
   }

   if(flag) cout<<cnt<<'\n';
   else cout<<-1<<'\n';
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