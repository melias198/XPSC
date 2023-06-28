#include <iostream>
using namespace std;

int main() 
{
	int a,b;
	cin>>a>>b;
	int mul=a*b;
	int sum=a+b;
	int ans=abs(mul-sum);
	cout<<ans<<'\n';
	return 0;
}
