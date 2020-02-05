#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};

                //                   10
                //                /     \
                //              5        11
                //          /    \           \
                //        4       9            12         后续遍历序列[3, 4, 9, 5, 12, 11, 10]
                //    /               
                //  3     

class Solution {
public:
    bool VerifySquenceOfBST(vector<int> sequence) {
        int i;
        for(i=0;i<sequence.size()-1;i++)
        {
            if(sequence[i]<sequence[i+1])
            {
                i++;
            }
        else if(sequence[i+1]>sequence[i-1])
            {
                i++;
            }
            else
            {
                break;
            }
        }
        if (i==sequence.size()-1)
        {
            return true;
        }
        else
        {
            return false;
        }
        
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

    vector<int> vec;
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(2);
    vec.push_back(6);
    vec.push_back(7);
    vec.push_back(3);
    vec.push_back(1);

    Solution s;
    cout << s.VerifySquenceOfBST(vec) << endl;
    return 0;
}