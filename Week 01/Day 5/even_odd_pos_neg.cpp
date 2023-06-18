#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    vector<int> array(n);
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    int even=0,odd=0,pos=0,neg=0;
    for(int i=0;i<n;i++)
    {
        if(array[i]%2==0) even++;
        if(array[i]%2!=0) odd++;
        if(array[i]>0) pos++;
        if(array[i]<0) neg++;
    }
    cout<<"Even: "<<even<<'\n';
    cout<<"Odd: "<<odd<<'\n';
    cout<<"Positive: "<<pos<<'\n';
    cout<<"Negative: "<<neg<<'\n';
    return 0;
}

