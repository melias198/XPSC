#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    map<int,ll>prefix;
    for(int i=1;i<=n;i++)
    {
        int a,b;
        cin>>a>>b;
        prefix[a]++;
        prefix[b+1]--;
    }

    ll sum=0;
    bool flag=true;
    for(auto it:prefix)
    {
        sum+=it.second;
        if(sum>2)
        {
            flag=false;
            break;
        }
    }

    if(flag) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';

    return 0;
}