#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int arr[n+1];
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }

        int mn=INT_MAX;

        for(int i=1;i<=n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                int ans=(arr[i]+arr[j])+(j-i);
                mn=min(mn,ans);
            }
        }
        cout<<mn<<'\n';
    }    
    return 0;
}

