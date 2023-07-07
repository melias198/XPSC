/*
||-----------------------------------||
||           Mohammad Elias          ||
||-----------------------------------||
*/
#include <bits/stdc++.h>
#define ll long long int
#define pub push_back
#define pob pop_back
#define PI 3.14159265359
#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define cyes cout<<"Yes"<<endl
#define cno cout<<"No"<<endl
#define minus cout<<-1<<endl
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    int ans=n;
    ll seg_sum=0;

    for(int i=0;i<n;i++)
    {
        seg_sum+=v[i];
        int len=0;
        int idx=i+1;
        bool flag=false;
        ll sum=0;
        for(int j=i+1;j<n;j++)
        {
           if(sum+v[j]>seg_sum)
           {
            break;
           }
           if(j==n-1 && sum+v[j]==seg_sum)
           {
            idx=max(idx,len+1);
            flag=true;
            break;
           }
           sum+=v[j];
           len++;
           if(sum==seg_sum)
           {
            idx=max(idx,len);
            len=0;
            sum=0;
           }
        }

        if(flag) ans=min(ans,idx);
    }

    cout<<ans<<'\n';

}

int main()
{
    fast;
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
