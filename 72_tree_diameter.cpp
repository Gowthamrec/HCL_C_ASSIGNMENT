#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int v) : val(v), left(nullptr), right(nullptr) {}
};

int dfs(TreeNode *node, int &diameter) {
    if (!node) return 0;
    int left  = dfs(node->left,  diameter);
    int right = dfs(node->right, diameter);
    diameter = max(diameter, left + right);
    return 1 + max(left, right);
}

int treeDiameter(TreeNode *root) {
    int diameter = 0;
    dfs(root, diameter);
    return diameter;
}

int main() {
    TreeNode *root = new TreeNode(1);
    root->left  = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left  = new TreeNode(4);
    root->left->right = new TreeNode(5);

    cout << "Tree Diameter: " << treeDiameter(root) << endl;
    return 0;
}
