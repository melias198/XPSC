#include <iostream>
using namespace std;

int main() 
{
	int t; cin>>t;
	while(t--)
	{
	    int b[4];
	    for(int i=0;i<3;i++)
	    {
	        cin>>b[i];
	    }
	    
	    int cnt=0;
	    for(int i=0;i<3;i++)
	    {
	        if(b[i]==1)
	        {
	            cnt++;
	        }
	    }
	    
	    if(cnt>=2)
	    {
	        cout<<"Not now"<<'\n';
	    }
	    else
	    {
	        cout<<"Water filling time"<<'\n';
	    }
	    
	}
	return 0;
}
