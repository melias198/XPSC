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
   int n,m;
   cin>>n>>m;

   string s,k;
   cin>>s>>k;
   int num1=stoi(k);
   int move=INT_MAX;
   for(int i=0;i<n-m+1;i++)
   {
        string a=s.substr(i,i+m);
        int num2=stoi(a);
        int diff=num2-num1;
        move=min(diff,10-diff);
   }

   cout<<move<<'\n';
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