#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    vector<int>v;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
        mp[x]++;
    }
    int mn=*min_element(v.begin(),v.end());

    if(mp[mn]%2==0) cout<<"Unlucky"<<'\n';
    else cout<<"Lucky"<<'\n';
    return 0;
}

