#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<int>v(n),unique_val;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    
    for(auto num:v)
    {
        if(find(unique_val.begin(),unique_val.end(),num)==unique_val.end()) unique_val.push_back(num);
    }

    sort(unique_val.begin(),unique_val.end());

    int sz=unique_val.size();

    int d1=(unique_val[2]-unique_val[1]);
    int d2=(unique_val[1]-unique_val[0]);

    if(sz>3)
    {
        cout<<-1<<'\n';
    }
    else if(sz==3)
    {
        if(d1==d2) cout<<d2<<'\n';
        else cout<<-1<<'\n';
    }
    else if(sz==2)
    {
        if(d2%2==0) cout<<d2/2<<'\n';
        else cout<<d2<<'\n';
    }
    else cout<<0<<'\n';

    return 0;
}