#include <iostream>
#include <vector>
#include <stack>

// Function to perform Depth First Search
void dfs(int start, const std::vector<std::vector<int>>& adj_list, std::vector<bool>& visited) {
    std::stack<int> s;
    s.push(start);
    visited[start] = true;

    while (!s.empty()) {
        int node = s.top();
        s.pop();
        std::cout << node << " "; // Process the current node

        // Visit all neighbors of the current node
        for (int neighbor : adj_list[node]) {
            if (!visited[neighbor]) {
                s.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }
}

// Main function
int main() {
    // Example adjacency list representation of the graph
    std::vector<std::vector<int>> adj_list = {
        {1, 2},     // Node 0 is connected to nodes 1 and 2
        {0, 3, 4},  // Node 1 is connected to nodes 0, 3, and 4
        {0, 5},     // Node 2 is connected to nodes 0 and 5
        {1},        // Node 3 is connected to node 1
        {1},        // Node 4 is connected to node 1
        {2}         // Node 5 is connected to node 2
    };

    // Number of nodes in the graph
    int num_nodes = adj_list.size();

    // Vector to keep track of visited nodes
    std::vector<bool> visited(num_nodes, false);

    // Start DFS from node 0 (you can choose any starting node)
    std::cout << "DFS Traversal starting from node 0: ";
    dfs(0, adj_list, visited);
    std::cout << std::endl;
    return 0;
}

