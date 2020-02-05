#include <iostream>

using namespace std;

class Solution {
public:
    int jumpFloorII(int number) {
        int num=1;
        for(int jumpN = number-1; jumpN>0 ;jumpN--)
        {
            if (number - jumpN < 0) break;
            else
            {
                num+=jumpFloorII(number - jumpN);
            }
            
        }
        return num;
    }
};

int main()
{
    Solution s;
    int t=13;
    cout << s.jumpFloorII(t) << endl;
    return 0;
}