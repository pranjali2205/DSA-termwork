/* NAME- PRANJALI SRIVASTAVA
   SEC - A
   ROLL_NO -05 */
#include <iostream>
#include <list>
#include <queue>

using namespace std;

class graph
{
     int V;
     list <int> *l;
     public:
     graph(int v)
     {
         V=v;
         l=new list<int>[V];
     }
     void addedge(int i,int j,bool u=true)
     {
          l[i].push_back(j);
          if(u)
          {
               l[j].push_back(i);
          }
     }
     void bfs(int source)
     {
          queue<int>q;
          bool *vis=new bool[V]{0};
          q.push(source);
          vis[source]=true;
          while(!q.empty())
          {
               int f=q.front();
               cout<<f<<endl;
               for(auto i:l[f])
               {
                    if(!vis[i])
                    {
                         q.push(i);
                         vis[i]=true;
                    }
               }
          }
     }
};
int main()
{
     cout<<"enter total nodes:"<<endl;
     int n;
     cin>>n;
     graph g(n);
     cout<<"enter the node and its neighbour:"<<endl;
     for(int i=0;i<n;i++)
     {
          int a,b;
          cin>>a>>b;
          g.addedge(a,b);
     }
}
