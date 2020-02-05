#include <iostream>
#include <vector>

using namespace std;

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

struct TreeNode
{
    /* data */
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}  //初始化支持 TreeNode（int x）这种方式，即 把x赋给val，left和right赋值NULL
};




class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
        if (pre.empty())
            return NULL;
        vector<int> vinleft,vinright;
        vector<int> preleft,preright;
        TreeNode *root;
        int len = sizeof(vin);
        root->val = pre[0];
        for (int i=0;i<len;i++)
        {
            if (vin[i] == root->val)
            {
                for (int j=0;j<i;j++)
                {
                    vinleft.push_back(pre[j]);
                    //vinright.push_back(i+j+1);
                }
                for (int j=i+1;j<len;j++)
                {
                    vinright.push_back(pre[j]);
                }
                break;
            }
        }
        for (int i=1;i<sizeof(vinleft)+1;i++)
        {
            preleft.push_back(pre[i]);
        }
        root->left = &preleft[0];
        for (int i=sizeof(vinleft)+1;i<sizeof(vinright)+1;i++)
        {
            preright.push_back(pre[i]);
        }
        root->right = &preright[0];
        return reConstructBinaryTree(preleft, vinleft),reConstructBinaryTree(preright, vinright);
    }
};

int main()
{
    vector<int> prelist,vinlist;
    TreeNode *root;
    int pre[]={1,2,4,7,3,5,6,8};
    int vin[]={4,7,2,1,5,3,8,6};
    for(int i=0;i<sizeof(pre);i++)
    {
        prelist.push_back(pre[i]);
        vinlist.push_back(vin[i]);
    }
    Solution s;
    root = s.reConstructBinaryTree(prelist,vinlist);
    return 0;
}