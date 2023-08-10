
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
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define cyes cout << "Yes" << endl
#define cno cout << "No" << endl
#define minus cout << -1 << endl
using namespace std;

void solve()
{
   ll n,N;
   cin>>n;
   N=(n*(n-1))/2;
   vector<ll>v(N);
   for(int i=0;i<N;i++)
   {
        cin>>v[i];
   }

   sort(v.begin(),v.end());

   ll nxt=-1,add=n-1;
   while(nxt<N)
   {
        nxt+=add;
        cout<<v[nxt]<<" ";
        add--;
        if(add<=0) break;
   }
   cout<<v[nxt]<<'\n';
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