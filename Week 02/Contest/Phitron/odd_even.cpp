#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        vector<int>ans1;
        vector<int>ans2;
        for(int i=1;i<=n;i++)
        {
            int x;
            cin>>x;
            if(i%2==0) ans1.push_back(x);
            else ans2.push_back(x);
        }

        int odd=0,even=0;
        for(int i=0;i<ans1.size();i++)
        {
            if(ans1[i]%2==0) even++;
            else odd++;
        }
        bool flag=false;
        if(even==ans1.size() || odd==ans1.size()) flag=true;
        
        if(flag)
        {
            int odd2=0,even2=0;
            for(int i=0;i<ans2.size();i++)
            {
                if(ans2[i]%2==0) even2++;
                else odd2++;
            }
            if(even2==ans2.size() || odd2==ans2.size()) cout<<"YES"<<'\n';
            else cout<<"NO"<<'\n';
        }
        else
        {
            cout<<"NO"<<'\n';
        }
      
    }
    return 0;
}

