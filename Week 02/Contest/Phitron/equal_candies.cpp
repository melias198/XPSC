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
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }

        int mn=*min_element(v.begin(),v.end());
        int sum=0;

        for(int i=0;i<n;i++)
        {
            if(v[i]>mn) sum+=v[i]-mn;
        }
        cout<<sum<<'\n';
    }
    return 0;
}

