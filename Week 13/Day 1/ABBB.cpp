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
   string s;
   cin>>s;
   int sz=s.size();
   stack<char>st;
   for(int i=0;i<sz;i++)
   {
       if (!st.empty() && (st.top() == 'A' && s[i] == 'B'))
       {
           st.pop();
       }
       else if (!st.empty() && (st.top() == 'B' && s[i] == 'B'))
       {
           st.pop();
       }
       else
       {
           st.push(s[i]);
       }
   }
   cout<<st.size()<<'\n';
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