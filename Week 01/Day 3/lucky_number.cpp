#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b; cin>>a>>b;
    vector<int>ans;
    
    for(int i=a;i<=b;i++)
    {
        bool flag=true;
        int n=i;
        while(n!=0)
        {
            int m=n%10;
            if(m!=4 && m!=7)
            {
                flag=false;
                break;
            }
            n=n/10;
        }
        if(flag) 
        {
            ans.push_back(i);
        }
    }

    if(ans.empty())
    {
        cout<<-1<<'\n';
    }
    else
    {
        for(auto it:ans) 
        {
           cout<<it<<" ";
        }
    }

    return 0;
}

