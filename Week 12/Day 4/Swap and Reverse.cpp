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
   string s;
   cin>>s;

   if(k&1)
   {
        string a="",b="";
        for(int i=0;i<n;i++)
        {
            if(i&1) b+=s[i];
            else a+=s[i];
        }

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        int even=a.size(),odd=b.size();
        int i=0,j=0;
        string ans="";
        while(i<even or j<odd)
        {
            if(i<even)
            {
                ans+=a[i];
                i++;
            }
            if(j<odd)
            {
                ans+=b[j];
                j++;
            }
        }

        cout<<ans<<'\n';
   }
   else
   {
        sort(s.begin(),s.end());
        cout<<s<<'\n';
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