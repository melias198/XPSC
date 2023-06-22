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
    char ch;
    cin>>n>>ch;
    string s;
    cin>>s;
    s=s+s;
    int ans=0;
    for(int i=0;i<2*n;i++)
    {
        if(s[i]==ch)
        {
            int cnt=0;
            while(s[i]!='g')
            {
                i++;
                cnt++;
            }
            ans=max(ans,cnt);
        }
    }

    cout<<ans<<'\n';
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
