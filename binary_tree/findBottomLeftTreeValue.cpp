class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
    	queue < TreeNode *> current, next;

    	if( root == nullptr ){
    		return 0;
    	} else {
    		current.push(root);
    	}
        
        vector<int> result;

    	while(!current.empty()){
    		vector<int> level;
    		while(!current.empty()){
    			TreeNode * node = current.front();
    			current.pop();
    			level.push_back(node->val);
    			if(node->left) next.push(node->left);
    			if(node->right) next.push(node->right);
    		}
    		swap(current,next);
    		swap(result, level);
    	}

    	return result.front();
    }
};