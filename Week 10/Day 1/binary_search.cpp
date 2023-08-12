#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    int x;
    cin>>x;

    sort(v.begin(),v.end());
    int l=0,r=n-1,ans=-1;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(v[mid]==x)
        {
            ans=mid;
            break;
        }
        else if(v[mid]>x) l=mid+1;
        else r=mid-1;
    }

    cout<<ans<<'\n';

    return 0;
}