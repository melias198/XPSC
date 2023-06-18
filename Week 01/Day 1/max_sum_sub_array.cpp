#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin>>n;
    int k; cin>>k;
    int arra[n];

    for(int i=0;i<n;i++)
    {
        cin>>arra[i];
    }

    int i=0,j=0;
    long long sum=0,mx=INT_MIN;

    while(j<n)
    {
        sum+=arra[j];
        if(j<k-1)
        {
            j++;
        }
        else
        {
           mx=max(mx,sum);
           sum-=arra[i];
           i++;
           j++;
        }
    }

    cout<<mx<<'\n';
    
    return 0;
}

