// �и���ջ�ĸ��������ջʱ���û������ջ��Ԫ��
// ��ջ1,2,3,4,5
// ��ջ4,5,3,2,1
// ����1�븨��ջ����ʱջ��1��4��������ջ2
// ��ʱջ��2��4��������ջ3
// ��ʱջ��3��4��������ջ4
// ��ʱջ��4��4����ջ4�������������һλ����ʱΪ5��,����ջ������1,2,3
// ��ʱջ��3��5��������ջ5
// ��ʱջ��5=5����ջ5,�����������һλ����ʱΪ3��,����ջ������1,2,3
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