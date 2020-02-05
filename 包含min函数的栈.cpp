#include<iostream>
#include<stack>
using namespace std;

class Solution {
public:
    void push(int value) {
        s.push(value);
        if (smin.empty())
        {
            smin.push(value);
        }
        else if (value < smin.top())
        {
            smin.push(value);
        }
        else
        {
            smin.push(smin.top());
        }
        
    }
    void pop() {
        if(!smin.empty())
        {
            smin.pop();
        }
    }
    int top() {
        return smin.top();
    }
    int min() {
        return smin.top();
    }
private:
    stack<int> s;       //������ջ
    stack<int> smin;    //���ڼ�¼ǰN����ջ�е���Сֵ
};

int main()
{
    Solution s;
    s.push(3);
    cout << s.min() << endl;
    s.push(4);
    cout << s.min() << endl;
    s.push(2);
    cout << s.min() << endl;
    s.push(3);
    cout << s.min() << endl;
    s.pop();
    cout << s.min() << endl;
    s.pop();
    cout << s.min() << endl;
    s.pop();
    cout << s.min() << endl;
    s.push(0);
    cout << s.min() << endl;

    return 0;
}