#include <bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m,k;
	    cin>>n>>m>>k;
	    vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }

        bool flag=true;
        for(int i=0;i<n;i++)
        {
            int cnt=0;
            for(int j=v[i];j<=m;j++)
            {
                cnt++;
            }
            if(cnt<k)
            {
                flag=false;
                break;;
            }
        }
        if(flag) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
	}
	return 0;
}
