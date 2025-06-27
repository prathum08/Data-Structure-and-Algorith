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
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root == NULL){
            return {};
        }

        queue<TreeNode*> q;
        vector<vector<int>> res;

        q.push(root);

        bool turn = false;

        while(!q.empty()){
            vector<int> level;
            int qSize = q.size();

            for(int i = 0 ; i < qSize ; i++){
                TreeNode* temp = q.front();
                q.pop();

                level.push_back(temp -> val);

                if(temp -> left != NULL){
                    q.push(temp -> left);
                }
                if(temp -> right != NULL){
                    q.push(temp -> right);
                }
            }
            if(turn == true){
                reverse(level.begin() , level.end());
                res.push_back(level);
            }
            else{
                res.push_back(level);
            }

            turn = !turn;
        } 
        return res;
        
    }
};