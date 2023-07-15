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

    bool flag=true;
    for(int j=1;j<n;j++)
    {
        for(int i=0;i<j;i++)
        {
            for(int k=j+1;k<n;k++)
            {
                if((v[j]-v[i])==(v[k]-v[j]))
                {
                    flag=false;
                    break;
                }
            }
            if(!flag) break;
        }
        if(!flag) break;
    }

    if(flag) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
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
