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
   vector<int>mice(k+1);
   for(int i=1;i<=k;i++)
   {
        cin>>mice[i];
   }

   sort(mice.begin(),mice.end());
   int save=0,j=k,cat=0;

   while(true)
   {
       if(cat>=mice[j])
       {
           break;
       }
       int move=n-mice[j];
       save++;
       cat+=move;
       j--;
   }

   cout<<save<<'\n';
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