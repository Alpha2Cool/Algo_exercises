#include <iostream>
#include <vector>

using namespace std;


struct TreeNode {
int val;
TreeNode *left;
TreeNode *right;
TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
vector<int> a;
vector<int> inorderTraversal(TreeNode* root) {
if(root==NULL)
return a;
else
printT(root);
return a;
}
void printT(TreeNode* root){
if(root->left!=NULL)
printT(root->left);
a.push_back(root->val);
if(root->right!=NULL)
printT(root->right);
}
};