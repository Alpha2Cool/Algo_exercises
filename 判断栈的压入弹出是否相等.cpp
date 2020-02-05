#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool IsPopOrder(vector<int> pushV,vector<int> popV) {
        int size = pushV.size(), flag=1;
        for(int i=0;i<size;i++)
        {
            if(pushV[i]!=popV[size-1-i])
            {
                flag=0;
            }
        }
        if(flag)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

// 12345
// 54321

int main()
{
    int mat1[] = {1,2,3,4,5};
    int mat2[] = {5,4,3,2,1};
    vector<int> vec1,vec2;
    for(int i=0;i<5;i++)
    {
        vec1.push_back(mat1[i]);
        // vec1.at(i)=mat1[i];
        cout << vec1[i] << endl;
    }
    cout <<  "--" << endl;
    for(int i=0;i<5;i++)
    {
        vec2.push_back(mat2[i]);
        cout << vec2[i] << endl;
    }

    Solution s;
    cout <<  "--" << endl;
    cout << s.IsPopOrder(vec1,vec2) << endl;
    // cout << vec1.back() << endl;
    // vec1.pop_back();
    // cout << vec1.back() << endl;
    // cout << vec1.front() << endl;
    // vec1.at(1)=11;
    // cout << vec1[2] << endl;
    // cout << vec1[2] << endl;

    return 0;
}