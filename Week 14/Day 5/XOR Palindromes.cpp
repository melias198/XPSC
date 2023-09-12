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
   string s;
   cin>>s;
   vector<int>ans(n+1);
   int cnt=0,perfect1=0,perfect2=0;
   int i=0,j=n-1;
   while(i<j)
   {
        if(s[i]!=s[j]) cnt++;
        if(s[i]==s[j] and (s[i]=='0')) perfect1++;
        else if(s[i]==s[j] and (s[i]=='1')) perfect2++;
        i++;
        j--;
   }

   if(cnt==0) ans[0]=1;
   int v=0;
   if(n&1) v=1;
   for(int i=1;i<=n;i++)
   {
        if(cnt>i) continue;
        int y=i-cnt;
        if((y>(perfect1*2+perfect2*2)+v)) continue;

        if(y&1)
        {
            if(n%2==0) continue;
            else ans[i]=1;
        }
        else ans[i]=1;
   }

   string p;
   for(int i=0;i<=n;i++)
   {
        p.push_back((ans[i]+'0'));
   }

   cout<<p<<'\n';
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