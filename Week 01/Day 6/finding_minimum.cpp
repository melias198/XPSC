#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k; cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int i=0,j=0;
    vector<int>ans;
    vector<int>tmp;
    while(i<n)
    {
        tmp.push_back(arr[i]);
        if(j<k-1 && i!=n-1)
        {
            j++;
            i++;
        }
        else
        {
            int mx=*min_element(tmp.begin(), tmp.end());
            ans.push_back(mx);
            tmp.clear();
            i++;
            j=0;
        }
    }
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
    return 0;
}

