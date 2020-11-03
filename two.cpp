void topo(int i, int vis[],vector<int> adj[], stack<int> &s)
{
    vis[i]=1;
    for(auto j : adj[i])
    {
        if(vis[j]==0)
        topo(j,vis,adj,s);
    }
    s.push(i);
}

vector<int> topoSort(int V, vector<int> adj[]) 
{ 
    stack<int> s;
    vector<int> a;
 int vis[V] = {0};
 for(int i =0;i<V;i++)
 {
     if(vis[i]==0)
     topo(i,vis,adj,s);
 }
 while(!s.empty())
 {
    a.push_back(s.top());
    s.pop();
 }
 return a;
}
