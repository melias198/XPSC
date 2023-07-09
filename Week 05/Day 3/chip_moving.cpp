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
    int odd=0,even=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    cout<<min(even,odd)<<'\n';
}

int main()
{
    fast;
    solve();
   // ll t;
   // cin >> t;
   // while (t--)
   // {
   //     solve();
   // }
    return 0;
}
