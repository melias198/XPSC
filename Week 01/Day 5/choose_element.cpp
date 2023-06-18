#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k; cin>>n>>k;
    long long arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long sum=0;
    sort(arr, arr + n, greater<int>());
    for(int i=0;i<k;i++)
    {
        if(arr[i]>0) sum+=arr[i];
    }
    cout<<sum;
    return 0;
}

