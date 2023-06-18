#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int s,t;
    cin>>s>>t;
    int cnt=0;

    for(int i=0;i<=s;i++)
    {
        for(int j=0;j<=s;j++)
        {
            for(int k=0;k<=s;k++)
            {
                int sum=i+j+k; int mul=i*j*k;
                if(sum<=s && mul<=t) cnt++;
            }
        }
    }

    cout<<cnt<<'\n';
    
    return 0;
}

