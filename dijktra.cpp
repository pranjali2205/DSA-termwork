/* NAME- PRANJALI SRIVASTAVA
   SEC - A
   ROLL_NO -05 */
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

class graph
{
     int V;
     list<pair<int,int> > *l;
     public:
     graph(int v)
     {
         V=v;
     }
     void addedge(int u,int v,int wt,bool un=true)
     {
          l[u].push_back({wt,v});
          if(un)
          {
               l[v].push_back({wt,u});
          }
     }
     int dijktra(int src,int dest)
     {
          vector<int> dist(V,INT_MAX);
          set<pair<int,int> >s;
          dist[src]=0;
          s.insert(0,src);
          while(!s.empty())
          {
               auto it=s.begin();
               int node=it->second;
               int distTillNow=it->first;
               s.erase(it);
          for(auto nbrPair:l[node])
          {
               int nbr=nbrPair.second;
               int curredge=nbrPair.first;
               if(distTillNow+curredge<dist[nbr])
               {
                    auto f=s.find({dist[nbr],nbr});
                    if(f!=s.end())
                    s.erase(f);
                     dist[nbr]=distTillNow+curredge;
               s.insert({dist[nbr],nbr});
               }
          }
        }
        for(int i=0;i<V;i++)
        cout<<"node is"<<i<<"dist :"<<dist[i]<<endl;
        return dist[dest];
     }
};
int main()
{
     cout<<"enter total nodes:"<<endl;
     int n;
     cin>>n;
     graph g(n);
     cout<<"enter the node and its neighbour and its weight:"<<endl;
     for(int i=0;i<n;i++)
     {
          int a,b,w;
          cin>>a>>b>>w;
          g.addedge(a,b,w);
     }
}
