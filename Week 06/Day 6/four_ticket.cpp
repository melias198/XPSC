#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int sum=n*4;
        if(sum<=1000) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
	return 0;
}
