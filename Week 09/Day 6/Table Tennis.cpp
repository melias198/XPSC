#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    queue<int> q;

    int ans=0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        if(x>ans) ans=x;
        q.push(x);
    }

    if(k>=n-1)
    {
        printf("%d",ans);
    }
    else{

    

    int ans = 0;
    int cnt = 0;
    int a = q.front();
    q.pop();
    while (true)
    {
        int b = q.front();
        if (a > b)
        {
            q.pop();
            q.push(b);
            cnt++;
        }
        else
        {
            cnt = 0;
            q.push(a);
            a=b;
        }
        if (cnt >= k)
        {
            ans = a;
            break;
        }
    }

    printf("%d",ans);
    }

    return 0;
}