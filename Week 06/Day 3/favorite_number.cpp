#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int a;
	    cin>>a;
	    if(a%2==0)
	    {
	        if(a%7==0) cout<<"Alice"<<'\n';
	        else cout<<"Charlie"<<'\n';
	    }
	    else
	    {
	        if(a%9==0) cout<<"Bob"<<'\n';
	        else cout<<"Charlie"<<'\n';
	    }
	}
	return 0;
}
