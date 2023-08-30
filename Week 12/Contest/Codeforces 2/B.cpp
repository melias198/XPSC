/*
||-----------------------------------||
||           Mohammad Elias          ||
||-----------------------------------||
*/
#include <bits/stdc++.h>
#define ll long long int
#define pub push_back
#define pob pop_back
#define PI 3.14159265359
#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define cyes cout<<"Yes"<<endl
#define cno cout<<"No"<<endl
#define minus cout<<-1<<endl
using namespace std;

int ans;

void swap(int *a,int*b)
{
    int t=*a;
    *a=*b;
    *b=t;
}

int partition(vector<int>&array,int low,int high)
{
    int pivot=array[high];
    int i=(low-1);
    for(int j=low;j<high;j++)
    {
        if(array[j]<=pivot)
        {
            i++;
            swap(&array[i],&array[j]);
        }
    }
    swap(&array[i+1],&array[high]);
    return (i+1);
}

void sort(vector<int>&array,int low,int high,int &ans)
{
    if(low<high)
    {
        int pi=partition(array,low,high);
        ans++;
        sort(array,low,pi-1,ans);
        sort(array,pi+1,high,ans);
    }
}

void solve()
{
   int n;
   cin>>n;
   ans=0;
   vector<int>v(n);
   for(int i=0;i<n;i++)
   {
      cin>>v[i];
   }

   if(n==1) cout<<0;
   else
   {
        sort(v,0,n-1,ans);
        cout<<ans;
   }
   cout<<'\n';
}

int main()
{
    fast;
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}