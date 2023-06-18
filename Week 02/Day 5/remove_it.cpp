#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,x;
    cin>>n>>x;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    v.erase(remove(v.begin(), v.end(), x), v.end());

    if(v.empty())
    {
        cout<<'\n';
    }
    else
    {
         for(auto it:v)
         {
           cout<<it<<" ";
         }
    }
    return 0;
}

