#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int i=0,j=n-1;
    while(i<j)
    {
        cout<<arr[i]<<" "<<arr[j]<<" ";
        i++;
        j--;
    }

    if(n%2!=0) cout<<arr[i]<<" ";
    
    return 0;
}

