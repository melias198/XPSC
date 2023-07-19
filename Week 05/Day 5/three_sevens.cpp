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
    int m;
    cin>>m;
    vector<int>v[m];
    for(int i=0;i<m;i++)
    {
        int n;
        cin>>n;
        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }

    set<int>st;
    vector<int>ans(m);
    for(int i=m-1;i>=0;i--)
    {
       int x=-1;
       for(auto it:v[i])
       {
          if(!st.count(it))
          {
            x=it;
            st.insert(it);
          }
       }

       if(x==-1)
       {
          cout<<-1<<'\n';
          return;
       }
       ans[i]=x;
    }

    for(auto it:ans)
    {
        cout<<it<<" ";
    }
    cout<<'\n';
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
