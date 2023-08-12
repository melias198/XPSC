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
    
    auto it=upper_bound(v.begin(),v.end(),x);
    int idx=it-v.begin();

    cout<<idx<<'\n';

    return 0;
}