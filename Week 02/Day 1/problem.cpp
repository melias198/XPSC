#include <bits/stdc++.h>

using namespace std;

int main() {
	int t; cin>>t;
	while(t--)
	{
	    int n,m; cin>>n>>m;
	    int s=abs(n-m);
	    if(n==m) 
	    {
	        cout<<"YES"<<'\n';
	    }
	    
	    else if(s%2==0)
	    {
	        cout<<"YES"<<'\n';
	    }
	    
	    else
	    {
	        cout<<"NO"<<'\n';
	    }
	}
	return 0;
}
