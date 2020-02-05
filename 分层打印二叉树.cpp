#include <iostream>
#include <vector>
#include <queue>

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
    vector<int> PrintFromTopToBottom(TreeNode* root) {
        queue<TreeNode*> q;
        // 核心是创建一个用于存储打印顺序的队列，每次打印的时候只打印
        vector<int> vec;
        TreeNode *p,*left,*right;
        if (root == NULL)
        {
            return vec;
        }
        q.push(root);
        while (!q.empty())
        {
            vec.push_back(q.front()->val);
            if (q.front()->left!=NULL)
            {
                q.push(q.front()->left);
            }
            if (q.front()->right!=NULL)
            {
                q.push(q.front()->right);
            }
            q.pop();
        }
        return vec;
    }
};

int main()
{
    TreeNode *t1,*t2,*t3,*t4,*t5,*t6,*t7;
    //   1
    //  2 3
    // 45 67
    t1 = new TreeNode(1);
    t2 = new TreeNode(2);
    t3 = new TreeNode(3);
    t4 = new TreeNode(4);
    t5 = new TreeNode(5);
    t6 = new TreeNode(6);
    t7 = new TreeNode(7);
    t1->left = t2;
    t1->right = t3;
    t2->left = t4;
    t2->right = t5;
    t3->left = t6;
    t3->right = t7;

    Solution s;
    vector<int> vec = s.PrintFromTopToBottom(t1);
    for(int i=0;i<vec.size();i++)
    {
        cout << vec[i] << endl;
    }

    return 0;
}

