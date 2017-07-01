class Solution {  
public:  
    vector<int> largestValues(TreeNode* root) {  
        vector<int> res;  
        if(!root) return res;  
          
        queue<TreeNode*> q;  
        q.push(root);  
          
        while(!q.empty()){  
            int curMax = INT_MIN;  
            const int curLen = q.size();  
            for(int i = 0; i < curLen; ++i){  
                TreeNode* cur = q.front();  
                curMax = max(curMax, cur->val);  
                if(cur->left) q.push(cur->left);  
                if(cur->right) q.push(cur->right);  
                q.pop();
            }  
            res.push_back(curMax);  
        }  
          
        return res;  
    }  
};  