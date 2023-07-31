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
    vector<int>a(n),b(n);
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
        mp[a[i]]=0;
    }
    sort(b.rbegin(),b.rend());
    int j=0;
    vector<int>c;
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]!=b[j])
        {
            c.push_back(a[i]);
            mp[a[i]]=1;
        } 
        else
        {
            c.push_back(a[i]);
            mp[a[i]]=1;
            for(int j=(int)c.size()-1;j>=0;j--)
            {
                cout<<c[j]<<" ";
            }
            while(mp[b[j]]==1) j++;
            c.clear();
        }
    }

    for(int j=(int)c.size()-1;j>=0;j--)
    {
        cout<<c[j]<<" ";
    }
    cout<<"\n";
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
