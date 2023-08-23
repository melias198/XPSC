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
   int n,k,x;
   cin>>n>>k>>x;

    if(x!=1) 
    {
        cout<<"YES"<<endl;
        cout<<n<<endl;
        for(int i=0; i<n;i++) 
        {
            cout<<1<<" ";
        }
        cout<<endl;
    }

    else if(k==1 || (k==2 && n%2==1)) 
    {
        cout<<"NO"<<endl;
    } 
    else 
    {
        cout<<"YES"<< endl;
        cout<<n/2<<endl;
        cout<<(n%2==1?3:2)<<" ";
        for(int i=1;i<n/2;i++) 
        {
            cout<<2<<" ";
        }
        cout<<endl;
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