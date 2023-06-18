#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      char matrix[9][9];
      for(int i=1;i<9;i++)
      {
        for(int j=1;j<9;j++)
        {
         cin>>matrix[i][j];
        }
      }
      
      for(int i=2;i<8;i++)
      {
        for(int j=2;j<8;j++)
        {
          if(matrix[i][j]=='#')
          {
            if(matrix[i+1][j+1]=='#' && matrix[i+1][j-1]=='#' && matrix[i-1][j-1]=='#' && matrix[i-1][j+1]=='#')
            {
                cout<<i<<" "<<j<<'\n';
                i=9+j;
                j=9+i;
                break;
            }
          }
        }
      }
    
    }
    return 0;
}