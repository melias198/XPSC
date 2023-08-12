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
    
    auto it1=lower_bound(v.begin(),v.end(),x);
    int idx1=it1-v.begin();

    auto it2=upper_bound(v.begin(),v.end(),x);
    int idx2=it2-v.begin();

    cout<<idx2-idx1<<'\n';

    return 0;
}