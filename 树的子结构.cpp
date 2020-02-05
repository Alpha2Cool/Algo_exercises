#include <iostream>

using namespace std;

struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};

class Solution {
public:
    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
    {
        if (pRoot2==NULL)
        {
            return false;
        }

        if (((pRoot1->left==NULL)&&(pRoot2->left==NULL)) && ((pRoot1->right==NULL)&&(pRoot2->right==NULL)))
        {
            if (pRoot1->val==pRoot2->val)
                return true;
        }

        if (pRoot1->val==pRoot2->val)
        {
            if ((pRoot1->left!=NULL)&&(pRoot2->left!=NULL))
                HasSubtree(pRoot1->left,pRoot2->left);
            if ((pRoot1->right!=NULL)&&(pRoot2->right!=NULL))
                HasSubtree(pRoot1->right,pRoot2->right);
        }
    }
};

int main()
{

    return 0;
}