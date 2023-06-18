#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    int mul=n*x;
	    int cnt=0;
	    while(mul!=0)
	    {
	        cnt++;
	        mul=mul/10;
	    }
	    if(cnt==5) cout<<"YES"<<'\n';
	    else cout<<"NO"<<'\n';
	}
	return 0;
}
