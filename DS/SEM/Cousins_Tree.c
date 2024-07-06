//   Definition for a binary tree node.
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
 };
int depth(struct TreeNode* root, int n, int currentDepth) {
    if (root == NULL) return -1;// not found in perticular recursive call
    if (root->val == n) return currentDepth;//found 

    int leftDepth = depth(root->left, n, currentDepth + 1);
    if (leftDepth != -1) return leftDepth;// left la kedaikala so right la pooga num
    
    int rightDepth = depth(root->right, n, currentDepth + 1);
    return rightDepth; //it may be -1 not forund 
}
struct TreeNode* parent(struct TreeNode* root, int n) {
    if (root == NULL || (root->left == NULL && root->right == NULL)) return NULL;
    if ((root->left && root->left->val == n) || (root->right && root->right->val == n)) {
        return root;
    }
    struct TreeNode* leftParent = parent(root->left, n);
    if (leftParent != NULL) return leftParent;//first if statement not found na exicute aguma apo left la ila so right la paaru
    struct TreeNode* rightParent = parent(root->right, n);
    return rightParent;
}
bool isCousins(struct TreeNode* root, int x, int y) {
    return (depth(root, x, 0) == depth(root, y, 0)) && (parent(root, x) != parent(root, y));
}// same depth different parents