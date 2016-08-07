#include <stack>

using std::stack;

/**
 * Definition for a binary tree node.
 **/
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
 
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
    	if (!root) {
    		return NULL;
    	} else {
        	stack<TreeNode*> s;
        	s.push(root);
        	while (!s.empty()) {
        		TreeNode* c = s.top();
        		s.pop();
        		TreeNode* tmp = c->left;
        		c->left = c->right;
        		c->right = tmp;
        		if (c->left) {
        			s.push(c->left);
        		}
        		if (c->right) {
        			s.push(c->right);
        		}
        	}
        	return root;
        }
    }
};

int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}