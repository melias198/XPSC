#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        long long n,m,h;
        cin>>n>>m>>h;
        long long cars_cap[n];
        long long outlet_cap[m];

        for(int i=0;i<n;i++)
        {
            cin>>cars_cap[i];
        }

        for(int i=0;i<m;i++)
        {
            cin>>outlet_cap[i];
        }

        sort(cars_cap,cars_cap+n,greater<long long>());
        sort(outlet_cap,outlet_cap+m,greater<long long>());

        long long ans=0;
        for(int i=0;i<min(n,m);i++)
        {
            ans+=min(cars_cap[i],outlet_cap[i]*h);
        }

        cout<<ans<<'\n';
    }
    return 0;
}
