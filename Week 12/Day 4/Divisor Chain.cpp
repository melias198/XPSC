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

   vector<int>ans;
   ans.push_back(n);
   while (n > 1) 
   {
       if (n & 1) 
       {
           n--;
       } 
       else 
       {
           n /= 2;
       }
       ans.push_back(n);

       if (n == 1) 
       {
          break;
       }
   }
   
   int sz=ans.size();
   cout<<sz<<'\n';
   for(auto it:ans) cout<<it<<" ";
   cout<<"\n";
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