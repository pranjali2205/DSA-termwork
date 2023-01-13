/* NAME - PRANJALI SRIVASTAVA
   SEC - A
   ROLL_NO- 05 */
#include<iostream>
using namespace std;
#define INF 99999
void floyd(int b[][5])
{
    int n=5;
    for(int k=0;k<n;k++)
    {
        for(int i=0;i<n;i++)
        {

            for(int j=0;j<n;j++)
            {
                 if ((b[i][k] * b[k][j] != 0) && (i != j))
                {
                    if ((b[i][k] + b[k][j] < b[i][j]) || (b[i][j] == 0))
                    {
                        b[i][j] = b[i][k] + b[k][j];
                    }
                }
            }
        }
    }
}
int main()
{
  int  arr[5][5]={{0,10,5,5,INF},{INF,0,5,5,5},{INF,INF,0,INF,10},{INF,INF,INF,0,20},{INF,INF,INF,5,0}};
    floyd(arr);
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
