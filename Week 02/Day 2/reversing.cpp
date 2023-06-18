#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        ans.push_back(arr[i]);
        if(arr[i]==0)
        {
            reverse(ans.begin(),ans.end()-1);
        }
    }

    for(auto it:ans)
    {
        cout<<it<<" ";
    }
    
    return 0;
}

