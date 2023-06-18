#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        
        vector<string> s(n);
        for(int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
    
        int ans1 = 10000;
    
        for(int i = 0; i < n; i++)
        {
            string t = s[i];
            int ans = 0;
            
            for(int j = 0; j < n; j++)
            {
                if(i != j)
                {
                    string st = s[j];
                    ans = 0;
                    
                    for(int k = 0; k < m; k++)
                    {
                        int a = st[k] - 'a' + 1;
                        int b = t[k] - 'a' + 1;
                        ans += abs(a - b);
                    }
                    
                    ans1 = min(ans1, ans);
                }
            }
        }
        
        cout << ans1 << '\n';
    }

    return 0;
}