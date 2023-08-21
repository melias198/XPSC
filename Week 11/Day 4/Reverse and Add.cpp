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


long long reversed(long long n)
{
    long long ret = 0;
    while(n)
    {
        ret = ret*10+n%10;
        n /= 10;
    }
    
    return ret;
}

int d[10];

bool isPalindrome(long long n)
{
    int sz = 0;
    
    while(n){
        d[sz++] = n%10;
        n /= 10;
    }
    
    for(int i = 0;i<sz-1-i;++i)
        if(d[i]!=d[sz-1-i])
            return false;
    
    return true;
}

void solve()
{
    ll n;
    cin>>n;
    
    int ans = 0;
        
    while(!isPalindrome(n))
    {
        n += reversed(n);
        ans++;
    }

    //cout<<ans<<" "<<n<<'\n';
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