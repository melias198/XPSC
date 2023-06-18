#include <bits/stdc++.h>

using namespace std;

bool is_palindrome(long long x)
{
    string ans="";
    while(x)
    {
        long long digit=x%10;
        ans+=(digit+'0');
        x/=10;
    }
    string ans2=ans;
    reverse(ans2.begin(),ans2.end());
    return ans==ans2;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int>v;
    for(long long i=0;i<(1<<15);i++)
    {
        if(is_palindrome(i))
        {
            v.push_back(i);
        }
    }

    int t; cin>>t;
    while(t--)
    {
        long long n; cin>>n;
        long long arr[n];
        long long freq[35000]={0};
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            freq[arr[i]]++;
        }

        long long ans=0;
        for(long long i=0;i<n;i++)
        {
            for(long long j=0;j<v.size();j++)
            {
                long long k=arr[i]^v[j];
                if(k>(1<<15))
                {
                    continue;
                }
               
                ans+=freq[k];
            }
        }
        cout<<(ans+n)/2<<'\n';
    }
    return 0;
}

