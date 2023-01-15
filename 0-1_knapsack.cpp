/* NAME - PRANJALI SRIVASTAVA
   SEC - A
   ROLL_NO- 05 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int knapsack(int w,vector<int>wt,vector<int>val,int n)
{
     if(n==0||w==0)
     return 0;
     if(wt[n-1]>w)
     return knapsack(w,wt,val,n-1);
     else
     return max(val[n-1]+knapsack(w-wt[n-1],wt,val,n-1),knapsack(w,wt,val,n-1));
}
int main()
{
     int n;
     cout<<"enter no. of jobs"<<endl;
     cin>>n;
     vector<int> val(n);
     vector<int> wt(n);
     cout<<"enter value"<<endl;
     for(int i=0;i<n;i++)
     cin>>val[i];
     cout<<"enter weight"<<endl;
     for(int i=0;i<n;i++)
     cin>>wt[i];
     int w;
     cout<<"enter weight of knapsack"<<endl;
     cin>>w;
     cout<<knapsack(w,wt,val,n);
}
