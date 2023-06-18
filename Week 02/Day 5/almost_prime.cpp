#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int cnt=0,prime;
    for(int i=1;i<=n;i++)
    {
        int x=i;
        prime=0;
        for(int j=2;j<=x;j++)
        {
            if(x%j==0)
            {
                bool flag=true;
                for(int k=2;k<=sqrt(j);k++)
                {
                    if(j%k==0)
                    {
                        flag=false;
                        break;
                    }
                }
                if(flag) prime++;
            }
        }
        if(prime==2) cnt++;
    }

    cout<<cnt;
    
    return 0;
}

