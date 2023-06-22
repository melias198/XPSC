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
    int n,q;
    cin>>n>>q;
    vector<int>v(n);
    ll sum=0;
    int odd=0,even=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        sum+=v[i];
        if(v[i]%2==0) even++;
        else odd++;
    }

    for(int i=0;i<q;i++)
    {
        int type,x;
        cin>>type>>x;
        if(type==1)
        {
            sum+=odd*x;
            if(x%2!=0)
            {
                even+=odd;
                odd=0;
            } 
        }
        else
        {
            sum+=even*x;
            if(x%2!=0) 
            {
                odd+=even;
                even=0;
            }
        }

        cout<<sum<<'\n';
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
