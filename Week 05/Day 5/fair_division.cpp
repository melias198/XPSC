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
    int sum=0;
    int ones=0,twos=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        sum+=x;
        if(x==1) ones++;
        else twos++;
    }

    if(sum%2!=0)
    {
        cout<<"NO"<<'\n';
    }
    else
    {
        int s=sum/2;
        if(s%2==0 || (s%2==1 && ones!=0))
        {
            cout<<"YES"<<'\n';
        }
        else
        {
            cout<<"NO"<<'\n';
        }
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
