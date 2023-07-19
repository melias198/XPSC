#include<iostream>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int a=n;
    while(k--)
    {
       int ld=a%10;
       if(ld==0)
       {
         a/=10;
       }
       else
       {
         a-=1;
       }
    }
    cout<<a<<endl;
    return 0;
}