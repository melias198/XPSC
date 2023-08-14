#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        int cnt=0;
        for(int i=1;i<=n;i++)
        {
            if(arr[i]>i)
            {
                cnt=max(cnt,arr[i]-i);
            }
        }
        cout<<cnt<<'\n';
    }
    return 0;
}