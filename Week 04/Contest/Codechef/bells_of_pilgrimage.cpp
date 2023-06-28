#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long n,x,k,p;
	    cin>>n>>x>>k>>p;
	    long long sum=p;
	    for(int i=1;i<=k;i++)
	    {
	        if(i<=x)
	        {
	            sum+=10;
	        }
	        else
	        {
	            sum+=5;
	        }
	        
	    }
	    if(n==k)
	    {
	        sum+=20;
	    }
	    cout<<sum<<'\n';
	}
	return 0;
}
