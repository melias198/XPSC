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
        long long n,m;
        cin>>n>>m;
        vector<long long>q(m);
        long long sum=0;
        for(int i=0;i<m;i++)
        {
            cin>>q[i];
            sum+=q[i];
        }
        long long cost=(n*(n+1))/2;
        cout<<cost-sum<<'\n';
    }
    return 0;
}
