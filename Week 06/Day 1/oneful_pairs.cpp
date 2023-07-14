#include <iostream>
using namespace std;

int main() 
{
	int a,b;
	cin>>a>>b;
	int sum=a+b+(a*b);
	if(sum==111) cout<<"Yes";
	else cout<<"No";
	return 0;
}
