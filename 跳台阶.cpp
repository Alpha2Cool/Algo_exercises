#include <iostream>

using namespace std;

class Solution {
public:
    int jc(int n){
        if(n==0||n==1)
        {
            return 1;
        }
        if(n!=0&n!=1)
        {
            return n*jc(n-1);
        }
    }

    // 不适合大数运算的解决办法 13以内正确
    int jumpFloor(int number) {
        int x,y,m,T=1,sum=0;
        for (x=0;x<=number;x++)
        {
            y = int(1.0*(number-x)/2);
            if(x+2*y==number)
            {
                m = x+y;
                T = int(1.0*jc(m)/(jc(x)*jc(y)));
                sum = sum + T;
            }
        }
        return sum;
    }

    // 其他办法
    int jf(int number)
    {
        if(number ==0) return 0;
        if(number ==1) return 1;
        if(number ==2) return 2;

        return jf(number-1)+jf(number-2);
    }
};


int main()
{
    Solution s;
    int t=13;
    cout << s.jumpFloor(t) << endl;
    cout << s.jf(t) << endl;
    return 0;
}