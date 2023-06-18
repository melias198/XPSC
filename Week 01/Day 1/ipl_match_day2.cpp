#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arra[n];
    int k;
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> arra[i];
    }

    multiset<int>ml;
    vector<int>ans;

    int i = 0, j = 0;
    while (j < n)
    {
        ml.insert(arra[j]);
        if (j < k-1)
        {
            j++;
        }
        else
        {
            int mx =*ml.rbegin();
            ans.push_back(mx);
            ml.erase(ml.find(arra[i]));
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


