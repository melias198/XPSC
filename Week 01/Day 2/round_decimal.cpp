#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    float x;
    cin>>x;

    int a=x;
    float b =a+0.5;
    
    if(x>=b)
    {
        cout<<a+1;
    }
    else
    {
        cout<<a;
    }

    return 0;
}

