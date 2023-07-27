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

    vector<int>a(n),b(n);
    int cnt_one=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1) cnt_one++;
    }

    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }

    bool flag=true;
    for(int i=1;i<n-1;i++)
    {
        if(a[i]==1 && b[i]==0)
        {
            flag =false;
            break;
        }
        if(a[i]==0 && b[i]==1)
        {
            if(cnt_one<1)
            {
                flag=false;
                break;
            }
        }
    }

    if(a[0]!=b[0] || a[n-1]!=b[n-1]) flag=false;

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
