#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    long long arr[n];
    long long sum=0;
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }

    if(sum%2==0)
    {
        cout<<sum<<'\n';
    } 
    else
    {
        long long mn=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2!=0)
            {
                mn=min(mn,arr[i]);
            }
        }
        cout<<sum-mn<<'\n';
    }

    return 0;
}

