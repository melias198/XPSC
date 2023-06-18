#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,t;
    cin>>a>>b>>t;
    int sum=0,i=2,n=a;

    while(n<=t+0.5)
    {
        sum+=b;
        n=a*i;
        i++;
    }

    cout<<sum<<'\n';
    
    return 0;
}

