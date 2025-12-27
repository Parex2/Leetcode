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
    
    
    void search(TreeNode* p, TreeNode* q, bool& result){
        if(!p || !q){
            result = false;
            return;
        }
        if(p->left){
            if(q->left){
                search(p->left, q->left, result);
            }else{
                result = false;
            }
            
            
        }else if(q->left){
            result = false;
        }

        if(p->right){
            if(q->right){
                search(p->right, q->right, result);
            }else{
                result = false;
            }
        }else if(q->right){
            result = false;
        }

        if(p->val != q->val){
            result = false;
        }
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool result = true;
        if(p == q){
            return result;
        }
        search(p, q, result);

        return result;
    }