#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const int N= 2e5 + 10;
bool gondola[N];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,x;
    cin>>n>>x;

    vector<ll>v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    sort(v.begin(),v.end());

    ll cnt=0,i=0,j=n-1;
   
    while(i<j)
    {
        if(v[i]+v[j]>x)
        {
            j--;
        }
        else
        {
           cnt++;
           gondola[i]=gondola[j]=true;
           i++;
           j--;
        }
    }

    for(int i=0;i<n;i++)
    {
        cnt+=gondola[i]==false;
    }

    cout<<cnt<<endl;

    return 0;
}