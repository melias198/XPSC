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
    string s;
    cin>>s;
    bool flag=true;
    for(int i=0;i<n;i++) 
    {
        for(int j=+1;j<n;j++)
        {
            if(v[i]==v[j] && s[i]!=s[j])
            {
                flag=false;
                i=n+j;
                break;
            }
        }
    }
    if(flag) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
    
}

int main()
{
    fast;
    //solve();
    ll t;
    cin >> t;
    while (t--)
    {
      solve();
    }
    return 0;
}
