#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        int flag = 0;
        for (int i=0;i<array.size();i++)
        {
            for (int j=0;j<array[0].size();j++)
            {
                if (target == array[i][j])
                {
                    flag=1;
                    return true;
                }
            }
        }
        if (flag == 0)
        {
            return false;
        }
    }
};

int main()
{
    int matrix[5][5]={{1,2,3,4,5},
                    {12,13,14,15,16},
                    {23,24,25,26,27},
                    {34,35,36,37,38},
                    {45,46,47,48,49}};
    vector<vector <int> >array(5, vector<int> (5));
    for (int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            array[i][j] = matrix[i][j];
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    Solution s;
    bool result = s.Find(5,array);
    cout << result << endl;
    return 0;
}
