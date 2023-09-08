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

bool prime(int n)
{
    if(n<2) return false;
    if(n==2) return true;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0) return false;
    }
    return true;
}

int div(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0) return i;
    }
    return n;
}

void solve()
{
   int a,b;
   cin>>a>>b;
   bool flag=true;
   if(a==b and (a==1 or prime(a))) flag=false;
   else if(a==1 and (b==2 or b==3) or (a==2 and b==3)) flag=false;

   if(!flag)
   {
        cout<<-1;
   }
   else
   {
        if(a==b)
        {
            if(a%2==0) cout<<a/2<<" "<<a/2;
            else
            {
                int x=div(a);
                cout<<x<<" "<<a-x;
            }
        }
        else
        {
            if(a%2!=0 and a!=1) a++;
            else if(a==1) a+=3;
            else if(a==2) a+=2;
            cout<<a/2<<" "<<a/2;
        } 
   }
   cout<<endl;
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