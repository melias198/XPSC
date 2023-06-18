#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
    long long n,k;
    cin>>n>>k;
    long long m=INT_MAX;
    if(k<60)
    {
       m=pow(2,k);
    }
    long long ans=min(m,(n+1));
    cout<<ans<<'\n';
    }
    return 0;
}

