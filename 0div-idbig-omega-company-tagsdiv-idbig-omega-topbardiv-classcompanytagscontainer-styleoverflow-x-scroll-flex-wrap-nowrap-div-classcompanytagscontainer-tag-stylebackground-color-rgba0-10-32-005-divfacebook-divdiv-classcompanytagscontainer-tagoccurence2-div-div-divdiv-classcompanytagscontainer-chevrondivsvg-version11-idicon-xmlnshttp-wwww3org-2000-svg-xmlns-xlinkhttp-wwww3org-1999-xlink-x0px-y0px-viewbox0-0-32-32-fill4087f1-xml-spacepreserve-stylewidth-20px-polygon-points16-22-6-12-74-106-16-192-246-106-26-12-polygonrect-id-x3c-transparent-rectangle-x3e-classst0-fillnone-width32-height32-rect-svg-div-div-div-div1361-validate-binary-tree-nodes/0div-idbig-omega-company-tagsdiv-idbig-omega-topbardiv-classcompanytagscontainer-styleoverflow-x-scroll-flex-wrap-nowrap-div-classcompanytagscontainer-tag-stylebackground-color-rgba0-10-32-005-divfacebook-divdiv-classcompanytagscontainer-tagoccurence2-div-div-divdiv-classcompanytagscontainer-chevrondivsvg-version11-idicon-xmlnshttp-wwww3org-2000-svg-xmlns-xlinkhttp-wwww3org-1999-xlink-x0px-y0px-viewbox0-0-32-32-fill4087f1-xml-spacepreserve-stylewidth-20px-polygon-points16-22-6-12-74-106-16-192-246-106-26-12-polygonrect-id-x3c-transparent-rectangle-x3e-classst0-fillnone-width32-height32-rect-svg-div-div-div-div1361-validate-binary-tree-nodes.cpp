class Solution {
public:
    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
        int root = -1; // Initialize the root node as -1.
        int count = 0; // Initialize the count of nodes with no incoming edges.
        vector<int> adj[n]; // Create an adjacency list to represent the tree.
        vector<int> indeg(n, 0); // Initialize the in-degrees of nodes.
        vector<bool> vis(n, false); // Initialize a boolean array to mark visited nodes.
        queue<int> q; // Create a queue for BFS.

        // Construct the adjacency list and calculate in-degrees.
        for (int i = 0; i < n; i++) {
            if (leftChild[i] != -1) {
                adj[i].push_back(leftChild[i]);
                indeg[leftChild[i]]++;
            }
            if (rightChild[i] != -1) {
                adj[i].push_back(rightChild[i]);
                indeg[rightChild[i]]++;
            }
        }

        // Find the root node (a node with no incoming edges) and count such nodes.
        for (int i = 0; i < n; i++) {
            if (!indeg[i]) {
                count++;
                root = i;
            }
        }

        // If there is more than one root or no root found, it's not a valid tree.
        if (count > 1 || root == -1)
            return false;

        // Start BFS from the root node to check for cycles and visit all nodes.
        q.push(root);
        vis[root] = true;
        while (!q.empty()) {
            int curNode = q.front();
            q.pop();
            for (auto x : adj[curNode]) {
                if (vis[x])
                    return false; // If a node is visited twice, there's a cycle.
                q.push(x);
                vis[x] = true;
            }
        }

        // If there are unvisited nodes, it's not a valid tree.
        for (int i = 0; i < n; i++)
            if (!vis[i])
                return false;

        return true; // If all conditions are met, it's a valid binary tree.
    }
};
