#include <iostream>
#include <limits>

using namespace std;

// Node structure for BST
struct Node {
    int key;
    double probability;
    Node* left;
    Node* right;

    Node(int k, double p) : key(k), probability(p), left(nullptr), right(nullptr) {}
};

// Function to build a binary search tree with the least search cost
Node* buildBST(int keys[], double probabilities[], int start, int end) {
    if (start > end)
        return nullptr;

    double minCost = numeric_limits<double>::max();
    int minIndex = -1;

    // Find the root with the minimum expected search cost
    double totalProb = 0;
    for (int i = start; i <= end; i++)
        totalProb += probabilities[i];

    double leftProb = 0;
    for (int i = start; i <= end; i++) {
        leftProb += probabilities[i];
        double rightProb = totalProb - leftProb;

        double cost = leftProb + rightProb;

        if (cost < minCost) {
            minCost = cost;
            minIndex = i;
        }
    }

    Node* root = new Node(keys[minIndex], probabilities[minIndex]);

    // Recursively build the left and right subtrees
    root->left = buildBST(keys, probabilities, start, minIndex - 1);
    root->right = buildBST(keys, probabilities, minIndex + 1, end);

    return root;
}

// Function to print the inorder traversal of the BST
void inorderTraversal(Node* root) {
    if (root == nullptr)
        return;

    inorderTraversal(root->left);
    cout << root->key << " ";
    inorderTraversal(root->right);
}

int main() {
    // Example input
    int keys[] = { 10, 20, 30, 40, 50 };
    double probabilities[] = { 0.1, 0.2, 0.3, 0.15, 0.25 };
    int n = sizeof(keys) / sizeof(keys[0]);

    // Build the BST
    Node* root = buildBST(keys, probabilities, 0, n - 1);

    // Print the inorder traversal of the BST
    inorderTraversal(root);
    cout << endl;

    // Cleanup - free memory
    // ...

    return 0;
}
