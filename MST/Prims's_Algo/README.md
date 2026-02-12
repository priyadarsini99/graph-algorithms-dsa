# Prim’s Algorithm

Prim’s Algorithm is a greedy algorithm used to find the Minimum Spanning Tree (MST) of a connected, weighted, undirected graph.

It builds the MST by always selecting the minimum weight edge that connects a visited node to an unvisited node.



## 🔹 Key Idea

- Start from any vertex.
- Use a Min Heap (Priority Queue) to always pick the smallest edge.
- Maintain a visited array to avoid cycles.
- Continue until all vertices are included.



## 🔹 Algorithm Steps

1. Convert edge list to adjacency list.
2. Initialize a Min Heap storing {weight, node}.
3. Push {0, start_node}.
4. While heap is not empty:
   - Extract minimum weight edge.
   - If node already visited → skip.
   - Add weight to total sum.
   - Push all unvisited neighbors into heap.
5. Return total MST weight.



## 🔹 Time Complexity

O(E log V)



## 🔹 Space Complexity

O(V + E)



## 🔹 Concepts Used

- Greedy Algorithm
- Min Heap (Priority Queue)
- Graph Traversal
- Adjacency List
- MST
