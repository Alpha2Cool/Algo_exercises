#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> printMatrix(vector<vector<int> > matrix) {
        vector<int> result;
        int len = matrix[0].size();
        int i,j1,j2,j3,j4;
        for(i=0;i<len/2;i++)
        {
            for(j1=i;j1<len-i;j1++)
            {
                result.push_back(matrix[i][j1]);
                cout << matrix[i][j1] << " ";
            }
            for(j2=i+1;j2<len-i;j2++)
            {
                result.push_back(matrix[j2][j1-1]);
                cout << matrix[j2][j1-1] << " ";
            }
            for(j3=len-i-2;j3>-1+i;j3--)
            {
                result.push_back(matrix[j2-1][j3]);
                cout << matrix[j2-1][j3] << " ";
            }
            for(j4=len-i-2;j4>0+i;j4--)
            {
                result.push_back(matrix[j4][j3+1]);
                cout << matrix[j4][j3+1] << " ";
            }
        }
        cout << endl;
        return result;
    }
};

int main()
{
    int mm[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    vector<vector<int> > matrix(4, vector<int> (4));
    for(int i=0;i<4;i++)
    {
        matrix[0][i]=mm[0][i];
        cout << matrix[0][i] << " ";
    }
    cout << endl;
    for(int i=0;i<4;i++)
    {
        matrix[1][i]=mm[1][i];
        cout << matrix[1][i] << " ";
    }
    cout << endl;
    for(int i=0;i<4;i++)
    {
        matrix[2][i]=mm[2][i];
        cout << matrix[2][i] << " ";
    }
    cout << endl;
    for(int i=0;i<4;i++)
    {
        matrix[3][i]=mm[3][i];
        cout << matrix[3][i] << " ";
    }
    cout << endl;

    vector<int> re;
    Solution s;
    re = s.printMatrix(matrix);
    for(int i=0;i<16;i++)
    {
        cout << re[i] << endl;
    }
    return 0;
}
