#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int nums[n];
    map<int,int>mp;

    for(int i=0;i<n;i++)
    {
       cin>>nums[i];
       mp[nums[i]]++;
    }

    int count=0;
    for(int i=0;i<n;i++)
    {
        if(mp[nums[i]+1]>0)
        {
            count++;
        }
    }

    cout<<count;

    return 0;
}

