class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<pair<int,int>>adj[n+1];
        for(int i=0;i<times.size();i++){
            int u=times[i][0];
            int v=times[i][1];
            int w=times[i][2];
            adj[u].push_back({v,w});
            // adj[v].push_back({u,w});
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        int src=k;
        vector<int>dist(n+1,INT_MAX);
        dist[0]=INT_MIN;
        dist[src]=0;
        pq.push({0,src});
        // int mx=INT_MAX;
        while(!pq.empty()){
            // int front=pq.top();
            int weight=pq.top().first;
            int val=pq.top().second;
            pq.pop();
            for(auto neigh:adj[val])
            {
                int node=neigh.first;
                int dis=neigh.second;
                int sum=dis+weight;
                if(dist[node]>sum){
                    dist[node]=sum;
                    pq.push({sum,node});
                }
        }
        }
           int ans = *max_element(dist.begin() + 1, dist.end());
        return (ans == INT_MAX) ? -1 : ans;}};