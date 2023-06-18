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
    int cnt=0,gcd;
    for(int i=2;i<=1000;i++)
    {
        int ans=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]%i==0)
            {
               ans++;
            }
        }
        if(cnt<ans)
        {
            cnt=ans;
            gcd=i;
        }
    }
    cout<<gcd<<'\n';
    return 0;
}

