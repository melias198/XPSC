#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long x,y;
    cin>>x>>y;

    long long n=x;
    long long cnt=0;
    while(n<=y)
    {
        cnt++;
        n=n*2;
    }

    cout<<cnt<<'\n';
    
    return 0;
}

