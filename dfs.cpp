/* NAME - PRANJALI SRIVASTAVA
  SEC- A
  ROLL_NO - 05 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void dfs(vector<int>adj[],bool vis[],int s)
{
     stack<int> st;
     st.push(s);
     vis[s]=true;
     while(!st.empty())
     {
          int p=st.top();
          st.pop();
          for(int itr:adj[p])
          {
               if(!vis[itr])
               {
                    st.push(itr);
                  vis[itr]=true;
               }
          }
     }
}
bool isconnected(vector <int> adj[],int s,int d,int v)
{
     bool vis[v+1]={false};
     dfs(adj,vis,s);
     return vis[d];
}
int main()
{
     int v,e;
     int s,d;
     cout<<"enter no. vertex and egdes"<<endl;
     cin>>v>>e;
     vector<int> adj[v+1];
     cout<<"enter  the edges:"<<endl;
     for(int i=0;i<e;i++)
     {
          int u,v;
          cin>>u>>v;
          adj[u].push_back(v);
          adj[v].push_back(u);
     }
     cout<<"enter source and destination:";
     cin>>s>>d;
     bool ans=isconnected(adj,s,d,v);
     if(ans)
     cout<<"path exists"<<endl;
     else
     cout<<"path does not exists"<<endl;
}
