 int spanningTree(int V, vector<vector<int>>& edges) {
       
        vector<int>vst(V , -1); // visited array to remove duplicate work
        int sum =0; //usuful to calculate  total weight of MST
        vector<vector<pair<int,int>>> adj(V); // adjacency list  (node -> {neighbor, weight})
   
        for(auto &edge : edges) {
        int u = edge[0];
        int v = edge[1];
        int w = edge[2];
    
        adj[u].push_back({v, w}); // if there a edge existing between (v-u) pushing adj[u]with {v ,w} and  adj[w]with {u ,w} as it is undirected graph 
        adj[v].push_back({u, w}); 
           }
        
         priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;// min heap (according to weight)
         pq.push({0,0}); // // start from node 0 with weight 0{weight , node}
         
         while(!pq.empty())
         {
             auto node = pq.top();
             pq.pop();
             int c_node = node.second;
             int n_wt = node.first;
             
             if (vst[c_node]!=-1) continue;
             vst[c_node] =1;
             sum = sum + n_wt; //updating the sum as curr_node is added to MST 
            //  cout<<sum <<endl;
            
             for(auto &it : adj[c_node]) // to traverse the neighbour of current node 
             {
                 int n_node = it.first;
                 if (vst[n_node] ==-1)
                 {
                    pq.push({it.second , n_node}) ; // {weight , node}
                     
                 }
             }
         }
         
        return sum ;
    }

int main() {

    int V = 3; // number of nodes in the graph
   
  
    vector<vector<int>> edges = {
        {0, 1, 5},
        {1, 2, 3},
        {0, 2, 1}
    }; //  edges - number of edges in the graph

    int result = spanningTree(V, edges);

    cout << "Sum of weights of MST: " << result << endl;

    return 0;
}

