#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long N; cin>>N;
    long long A[N];
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }
    long long K; cin>>K;

    long long i=0,j=0;
    vector<long long>ans;
    queue<long long>q;

    while(j<N)
    {
        if(A[j]<0) q.push(A[j]);
        if(j<K-1)
        {
            j++;
        }
        else
        {
            if(q.empty()) ans.push_back(0);
            else ans.push_back(q.front());
            if(A[i]<0)
            {
                q.pop();
            }
            i++;
            j++;
        }
    }

    for(auto it:ans)
    {
        cout<<it<<" ";
    }
    
    return 0;
}

