#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,c; cin>>a>>b>>c;

    bool flag=false;
    for(int i=0;i*a<=c;i++)
    {
        for(int j=0;(i*a)+(j*b)<=c;j++)
        {
            if((a*i)+(j*b)==c)
            {
                flag=true;
                i=c+1;
                break;
            }
        }
    }

    if(flag) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
    
    return 0;
}

