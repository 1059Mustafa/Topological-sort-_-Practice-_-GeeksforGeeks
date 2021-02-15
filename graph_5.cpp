class Solution{
	public:
	
	void dfs(vector<int>g[] , int start, stack<int>&s, vector<bool>&vis)
	{
	    vis[start]=true;
	    for(auto node:g[start])
	    {
	        if(!vis[node])
	        {
	            dfs(g,node,s,vis);
	        }
	    }
	    s.push(start);
	
	}
	
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    stack<int>s;
	    vector<int>v;
	    vector<bool>vis(V,false);
	    for(int i=0;i<V;i++)
	    {
	        if(!vis[i])
	        {
	            dfs(adj,i,s,vis);
	        }
	    }
	    while(s.size()>0)
	    {
	        v.push_back(s.top());
	        s.pop();
	    }
	    return v;
	}
};
