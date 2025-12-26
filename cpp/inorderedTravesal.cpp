    /**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
    
    
    void search(TreeNode* node, std::vector<int>& result){
        
        if(node->left){
            search(node->left, result);
        }
        std::cout << node->val;
        result.push_back(node->val);
        if(node->right){
            search(node->right, result);
        }
        
    }

    vector<int> inorderTraversal(TreeNode* root) {
        std::vector<int> result;
        if(root){
            //std::cout << search(root) << std::endl;
            search(root, result);
        }
        
        return result;
    }