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
    
    
    void compare(TreeNode* root_l, TreeNode* root_r, bool& result){
        
        if(root_l == nullptr || root_r == nullptr){
            result = root_l == root_r;
            return;
        }
        std::cout << root_r->val;
        if(!result){
            return;
        }
        result = root_r->val == root_l->val;
        
        if(root_l->left && root_r->right){
            compare(root_l->left, root_r->right, result);
        }else{
            result = root_l->left == root_r->right && result;
        }

        if(root_l->right && root_r->left){
            compare(root_l->right, root_r->left, result);
        }else{
            result = root_l->right == root_r->left && result;
        }
        
    }

    bool isSymmetric(TreeNode* root) {
        bool result = true;
        if(!root){
            return true;
        }

        compare(root->left, root->right, result);

        return result;
    }