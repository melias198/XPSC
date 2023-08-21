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

   string s="";
   for(char i='A';i<'A'+n;i++)
   {
        s+=i;
   }

   int cnt=0;
   do
   {
      cout<<s<<'\n';
      cnt++;
   } while (next_permutation(s.begin(),s.end()) and cnt<k);
   
}

int main()
{
    fast;
    ll t;
    cin >> t;
    int tst=1;
    while (t--)
    {
        cout<<"Case "<<tst++<<":"<<'\n';
        solve();
    }
    return 0;
}