#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    vector<int>ans;

    for(int i=2;i<=n;i++)
    {
        bool flag=true;
        for(int j=2;j<=sqrt(i);j++)
        {
           if(i%j==0)
           {
             flag=false;
             break;
           }
        }
        if(flag) ans.push_back(i);
    }

    for(auto it:ans)
    {
        cout<<it<<" ";
    }
    
    return 0;
}

