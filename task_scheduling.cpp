/* NAME - PRANJALI SRIVASTAVA
   SEC - A
   ROLL_NO - 05 */
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool compare(pair<int, int> a, pair<int ,int> b )
{
     return a.first>b.first;
}
int main()
{
     vector<pair<int , int>> job;
     int n,profit,deadline;
     cin>>n;
     vector<int> selected;
     for(int i=0;i<n;i++)
     {
          cin>>profit>>deadline;
          job.push_back(make_pair(profit,deadline));
     }
     sort(job.begin(),job.end(),compare);
     int max=0;
     for(int i=0;i<n;i++)
     {
          if(job[i].second>max)
          max=job[i].second;
     }
     int fill[max];
     int c=0,maxp=0;
     for(int i=0;i<max;i++)
     {
          fill[i]=-1;
     }
     for(int i=0;i<n;i++)
     {
          int j=job[i].second-1;
          while(j>=0 && fill[j]!=-1)
          {
               j--;
          }
          if(j>=0 && fill[j]==-1)
          {
               fill[j]=i;
               c++;
               maxp=maxp+job[i].first;
               selected.push_back(i+1);
          }
          
     }
     
     cout<<c<<" "<<maxp<<endl;
     sort(selected.begin(),selected.end());
     cout<<c<<endl;
     for(int i=0;i<=selected.size();i++)
     cout<<selected[i]<<" ";
}


