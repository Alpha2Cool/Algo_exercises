// 有辅助栈的概念：用于入栈时存放没有先入栈的元素
// 入栈1,2,3,4,5
// 出栈4,5,3,2,1
// 首先1入辅助栈，此时栈顶1≠4，继续入栈2
// 此时栈顶2≠4，继续入栈3
// 此时栈顶3≠4，继续入栈4
// 此时栈顶4＝4，出栈4，弹出序列向后一位，此时为5，,辅助栈里面是1,2,3
// 此时栈顶3≠5，继续入栈5
// 此时栈顶5=5，出栈5,弹出序列向后一位，此时为3，,辅助栈里面是1,2,3
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool IsPopOrder(vector<int> pushV,vector<int> popV) {
        int veclen = pushV.size();
        int k = 0 , lastval, flag;
        for (int j = 0; j < veclen; j++)
        {
            for (int i = 0; i < veclen; i++)
            {
                if (pushV[i] == popV[j])
                {
                    if (i == 0)
                    {
                        flag = i;
                    }
                    if (IsConnect(pushV, popV, i, j, flag))
                    {
                        k++;   
                    }
                }
            }
        }
        if (k == veclen)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool IsConnect(vector<int> pushV,vector<int> popV, int i, int j ,int f) {
        if(popV[j] == pushV[i-1 -1] || popV[j] == pushV[i-1 +1])
        {
            return true;
        }
        else if (popV[j] == pushV[f-1] || popV[j] == pushV[f+1])
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
    vector<int> vec, vecc1, vecc2;
    // 12345            ---- i pushV
    // 45321 -> true    ---- j popV
    // 43512 -> false   ---- j popV
    vec.push_back(1);vec.push_back(2);vec.push_back(3);vec.push_back(4);vec.push_back(5);
    vecc1.push_back(4);vecc1.push_back(5);vecc1.push_back(3);vecc1.push_back(2);vecc1.push_back(1);
    vecc2.push_back(4);vecc2.push_back(3);vecc2.push_back(5);vecc2.push_back(1);vecc2.push_back(2);
    Solution s;
    cout << s.IsPopOrder(vec, vecc1) << endl;
    cout << s.IsPopOrder(vec, vecc2) << endl;
}