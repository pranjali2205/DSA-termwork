/* NAME- PRANJALI SRIVASTAVA
   SEC - A
   ROLL_NO - 05 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int V,E;
    cout<<"Enter number of vertices and Edges";
    cin>>V>>E;
    vector<pair<int,int>>adj[V];
    int a,b,wt;
    for(int i=0;i<E;i++)
    {
        cin>>a>>b>>wt;
        adj[a].push_back(make_pair(b,wt));
        adj[b].push_back(make_pair(a,wt));
    }
    int parent[V];
    int key[V];
    bool mstset[V];
    for(int i=0;i<V;i++)
    {
        key[i]=INT_MAX,mstset[i]=false;parent[i]=-1;
    }
    key[0]=0;
    parent[0]=-1;
    for(int count=0;count<V-1;count++)
    {
        int mini=INT_MAX,u;
        for(int v=0;v<V;v++)
        {
            if(mstset[v]==false&&key[v]<mini)
            {
                mini=key[v];
                u=v;
            }
        }
            mstset[u]=true;
            for(auto it:adj[u])
            {
                int x=it.first;
                int w=it.second;
                if(mstset[x]==false&&w<key[x])
                {
                    parent[x]=u;
                    key[x]=w;
                }
            }
        }
        int sum=0;
        cout<<"The minimum cost is: ";
        for(int i=1;i<V;i++)
            {
                sum+=key[i];
            }
            cout<<sum;
        return 0;
    }
