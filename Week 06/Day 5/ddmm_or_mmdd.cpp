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
    string s;
    cin>>s;
    
    string ans="";

    int a=(10*(s[0]-'0')+s[1]-'0');
    if(a>12) ans+="DD/";
    else ans+="MM/";

    int b=(10*(s[3]-'0')+s[4]-'0');
    if(b>12) ans+="DD/";
    else ans+="MM/";

    ans+="YYYY";

    if(ans[0]==ans[3]) cout<<"BOTH"<<'\n';
    else cout<<ans<<'\n';
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
