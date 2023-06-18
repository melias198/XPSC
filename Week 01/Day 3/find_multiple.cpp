#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,c; cin>>a>>b>>c;
    bool flag=false;

    for(int i=1;i<=1000;i++)
    {
        int x=i*c;
        if(x>=a && x<=b)
        {
            flag=true;
            cout<<x<<'\n';
            break;
        }
    }

    if(!flag)
    {
        cout<<-1<<'\n';
    }
    
    return 0;
}

