#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin>>n;
    vector<long long>v(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }

    vector<long long>prefix_sum1(n+1);
    prefix_sum1[0]=0;
    for(int i=1;i<=n;i++)
    {
        prefix_sum1[i]=prefix_sum1[i-1]+v[i];
    }

    vector<long long>x=v;
    sort(x.begin(),x.end());
    vector<long long>prefix_sum2(n+1);
    prefix_sum2[0]=0;
    for(int i=1;i<=n;i++)
    {
        prefix_sum2[i]=prefix_sum2[i-1]+x[i];
    }

    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int type,l,r;
        cin>>type>>l>>r;
        if(type==1)
        {
            cout<<prefix_sum1[r]-prefix_sum1[l-1]<<'\n';
        }
        else
        {
            cout<<prefix_sum2[r]-prefix_sum2[l-1]<<'\n';
        }
    }
    
    return 0;
}

