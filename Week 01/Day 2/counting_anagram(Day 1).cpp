#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string txt,pat; cin>>txt>>pat;
    int k=pat.size(),i=0,j=0;
    int frq1[26]={0};
    int frq2[26]={0};

    for(auto c:pat)
    {
        frq1[c-'a']++;
    }

    int cnt=0;

    while(j<txt.size())
    {
        frq2[txt[j]-'a']++;
        if(j<k-1)
        {
            j++;
        }
        else
        {
            bool flag=true;
            for(int v=0;v<26;v++)
            {
                if(frq1[v]!=frq2[v])
                {
                    flag=false;
                    break;
                }
            }
            if(flag) cnt++;
            frq2[txt[i]-'a']--;
            i++;
            j++;
        }
    }

    cout<<cnt;
    
    return 0;
}

