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
#define minus cout<<-1<<
#define nl cout<<'\n'
using namespace std;

void solve()
{
    int m,s;
    cin>>m>>s;
    vector<int>per(m);
    int n=s;
    for(int i=0;i<m;i++)
    {
        cin>>per[i];
        n+=per[i];
    }
    int sum=0,j=0,i=1;
    while(i<=n)
    {
        if(sum>=n)
        {
            break;
        }
        sum+=i;
        j=i;
        i++;
    }
    int mx=*max_element(per.begin(),per.end());
    if(sum!=n || mx>j || j<=m) cout<<"NO"<<'\n';
    else cout<<"YES"<<'\n';
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
