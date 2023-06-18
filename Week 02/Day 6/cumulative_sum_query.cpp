#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

/*
    int prefix_sum[n];
    prefix_sum[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        prefix_sum[i]=prefix_sum[i-1]+arr[i];
    }
 */   

    int q;
    cin>>q;
    
    for(int k=0;k<q;k++)
    {
        int i,j;
        cin>>i>>j;
        int sum=0;
        for(int a=i;a<=j;a++)
        {
            sum+=arr[a];
        }
        cout<<sum<<'\n';
    }

    
    return 0;
}

