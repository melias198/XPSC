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
   
    ll a,b,c; cin>>a>>b>>c;

    ll cnt=0,x=0,y=0,z=0;

    for(int i=29; i>=0; i--)
    {
        ll av=(a&(1<<i)),bv=(b&(1<<i)),cv=(c&(1<<i));
        if(av==bv && av==cv) ;
        else if(av<min(bv,cv)) ;
        else if(av>max(bv,cv)) cnt+=pow(2,i);
        else if(cv>max(bv,av)) z++;
        else if(cv<min(av,bv)) z++,cnt+=pow(2,i);
        else if(bv<min(av,cv)) 
        {
            if(z>y) cnt+=pow(2,i);
        }
        else if(bv>max(av,cv))
        {
            if(z>y) ;
            else cnt+=pow(2,i);
        }
    }
    if((cnt^a)<(cnt^b) && (cnt^b)<(cnt^c)) cout<<cnt<<endl;
    else cout<<-1<<endl;
    
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
