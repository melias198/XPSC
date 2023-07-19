#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    int s=c/30;
	    int x=a+s;
	    int ans=0;
	    if(x%b!=0)
	    {
	        ans=x/b+1;
	    }
	    else ans=x/b;
	    cout<<ans<<'\n';
	}
	return 0;
}
