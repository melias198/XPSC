#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        long long l,r; cin>>l>>r;
        long long n=0,sum=0;

        if(l<r)
        {
            n=(r-l)+1;
        }
        else
        {
            n=(l-r)+1;
        }
        sum=(n*(l+r))/2;
        cout<<sum<<'\n';
    }
    return 0;
}


