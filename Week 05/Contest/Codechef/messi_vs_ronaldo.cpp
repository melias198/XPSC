#include <iostream>
using namespace std;

int main() 
{
	int a,b,x,y;
	cin>>a>>b>>x>>y;
	int messi=(a*2)+b;
	int ronaldo=(x*2)+y;
	if(messi>ronaldo) cout<<"Messi"<<'\n';
	else if(ronaldo>messi) cout<<"Ronaldo"<<'\n';
	else cout<<"Equal"<<'\n';
	return 0;
}
