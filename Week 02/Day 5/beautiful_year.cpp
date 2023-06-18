#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int year;
    cin>>year;
    
    for(int i=year+1;i<=9999;i++)
    {
        int n=i;
        map<int,int>mp;
        while(n!=0)
        {
            int ld=n%10;
            mp[ld]++;
            n=n/10;
        }
        if(mp.size()==4)
        {
            cout<<i<<'\n';
            break;
        }
    }
    
    return 0;
}

