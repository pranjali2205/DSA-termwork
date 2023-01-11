/* NAME - PRANJALI SRIVASTAVA
   SEC - A
   ROLL_NO - 05 */
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
     vector<pair<int,int>> activity;
     int n,s,e;
     cin>>n;
     vector<int> selected;
     
     for(int i=0;i<n;i++)
     {
          cin>>s>>e;
          activity.push_back(make_pair(e,s));
     }
     sort(activity.begin(),activity.end());
     
     int c=0,curr=-1;
     for(int i=0;i<n;i++)
     {
          if(activity[i].second>curr)
          {
               c++;
               curr=activity[i].first;
               selected.push_back(i+1);
          }
     }
     sort(selected.begin(),selected.end());
     cout<<c<<endl;
     for(int i=0;i<=selected.size();i++)
     cout<<selected[i]<<" ";
}
