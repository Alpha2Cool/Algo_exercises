#include <iostream>
#include <cmath>
 
using namespace std;
 
class Solution {
public:
    int ym(int num)
    {
        int n,m=0,t=1;
        n = num;
        while(n/2>=0)
        {
            if(n==0) break;
            m=m+t*(n%2);
            t*=10;
            n=n/2;
        }
        return m;
    }
    int fm(int num)
    {
        int n1=1,n2,n3=ym(-num),n4=1,n5,len=0,n6;
        while (n3/n4!=0)
        {
            len++;
            n4*=10;
        }
        for(int i=0;i<len;i++)
        {
            n1+=pow(10,i);
        }
        n2 = n1 - n3;
        n2 = n2 + pow(10,3);

        n5 = n2 * 9 + 1;
        n6 = n5;
        for (int k=0;k<len+1;k++)
        {
            
            if (n6 % 10 == 9)
            {
                n5=n5-8*pow(10,k);
            }
            n6 = n6 / 10;
        }
        return n5;     
    }
    int count(int num)
    {
        int n;
        while(num/10!=0)
        {
            n+=(num%10);
        }
        return n;
    }
    int  NumberOf1(int n) {
        int x;
        if(n>=0)
        {
            x = ym(n);
        }
        else
        {
            x = fm(n);
        }
        return count(x);
     }
};
 
int main()
{
    Solution s;
    for (int l=0;l<10;l++)
    cout << s.ym(l) << endl;
    cout << s.fm(-1*l) << endl;
    return 0;
}
