#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        int n,k,q; cin>>n>>k>>q;
        int temp[n];
        for(int i=1;i<=n;i++)
        {
            cin>>temp[i];
        }

        int cnt=0,i=0,j=0;
        bool flag=true;
        for(int i=1;i<=n;i++)
        {
            if(temp[i]>q)
            {
               flag=false;
            }
            cnt++;
        }
    }
    return 0;
}

