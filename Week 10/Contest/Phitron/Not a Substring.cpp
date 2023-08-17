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

   int n=s.size();
   stack<char>st;
   for(int i=0;i<n;i++)
   {
       if(st.empty()) st.push(s[i]);
       else if(st.top()=='(' and s[i]==')') st.pop();
       else st.push(s[i]);
   }

   if(st.empty()) cout<<"NO"<<'\n';
   else
   {
        string t="";
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(') t+=')';
            else t+='(';
        }

        stack<char>st2;
        string ans="";
        for(int i=0;i<n;i++)
        {
           if(st2.empty()) st2.push(t[i]);
           else if(st2.top()=='(' and t[i]==')')
           {
                ans+="()";
                st2.pop();
           } 
           else st2.push(t[i]);
        }

        while(!st2.empty())
        {
            ans+=st2.top();
            st2.pop();
        }

        string tr=ans;

        reverse(ans.begin(),ans.end());

        tr+=ans;

        cout<<"YES"<<'\n'<<tr<<'\n';
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