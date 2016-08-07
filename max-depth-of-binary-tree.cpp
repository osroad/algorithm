#include <queue>
#include <utility>

using std::queue;
using std::pair;
using std::make_pair;

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
    int maxDepthRec(TreeNode* root) {
    	int depth = 0;
    	if (!root) {
    		return 0;
    	} else {
    		depth = maxDepth(root->left) + 1;
    		int rdepth = maxDepth(root->right) + 1;
    		if (depth < rdepth) {
    			depth = rdepth;
    		}
    	}
    	return depth;
    }

    int maxDepth(TreeNode* root) {
    	int result = 0;
    	if (root) {
    	    result = 1;
    	    queue<pair<TreeNode*, int> > q;
    	    q.push(make_pair(root, 1));
    	    while (!q.empty()) {
        		TreeNode* cur = q.front().first;
    		    int depth = q.front().second;
    		    q.pop();
    
        		if (cur->left) {
        			q.push(make_pair(cur->left, depth + 1));
        		}
    		    if (cur->right) {
        			q.push(make_pair(cur->right, depth + 1));
    		    }
    		    if (depth > result) {
        			result = depth;
    		    }
    	    }
    	}
    	return result;
    }
};

int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}