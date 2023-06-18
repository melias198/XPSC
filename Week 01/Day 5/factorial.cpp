#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        if(n==0 || n==1)
        {
            cout<<"1"<<'\n';
            continue;
        }
        long long mul=1;
        for(int i=2;i<=n;i++)
        {
            mul*=i;
        }
        cout<<mul<<'\n';
    }
    return 0;
}

