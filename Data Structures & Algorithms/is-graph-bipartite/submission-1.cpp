class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {

        int n = graph.size();
        vector<int>vis(n, 0);
        queue<int>q;

        for(int i=0; i<n; i++){

            if(!vis[i]){
                q.push(i);
                vis[i]=1;
            }

            while(!q.empty()){
            int node = q.front();
            q.pop();

            for(int neighbour: graph[node]){
                if(!vis[neighbour]){
                    vis[neighbour]=-vis[node];
                    q.push(neighbour);
                }
                else if(vis[neighbour]==vis[node]) return 0;
            }
        }
        }

        return 1;
    }
};
