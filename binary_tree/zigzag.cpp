class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector< vector<int>> result;
        queue <TreeNode * > current, next;
        if( root== nullptr ){
            return result;
        } else {
            current.push(root);
        }
        
        bool indicator = true;
        
        while(!current.empty()){
        	vector<int> level;
            // true means start from right
            while(!current.empty()){
                
           		TreeNode * node = current.front();
                current.pop();
           		level.push_back(node->val);
               	if(node->left) next.push(node->left);
                if(node->right) next.push(node->right);
                
            }
            
           if(indicator == false){
               reverse(level.begin(), level.end());
               result.push_back(level);
               indicator = true;
           }else{
               result.push_back(level);
               indicator = false;
           }
           
           swap(current, next);
        }
        
        return result;
    }
};