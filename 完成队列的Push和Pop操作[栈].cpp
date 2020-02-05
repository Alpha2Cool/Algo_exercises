#include <iostream>
#include <stack>


using namespace std;

class Solution
{
public:
    void push(int node) {
        stack1.push(node);
    }

    int pop() {
        int popv;
        while(!stack1.empty())
        {
            stack2.push(stack1.top()); //��ջ1����Ԫ�ط���ջ2����˳��
            stack1.pop();
        }
        popv = stack2.top();
        stack2.pop();

//#if 0
        while(!stack2.empty())
        {
            stack1.push(stack2.top()); //��ջ2����Ԫ�ط���ջ1����˳����Ϊ������ջ1����ջ1Ϊ�գ����뵼�����ʹ˳�򲻱�
            stack2.pop();
        }
//#endif

        return popv;
    }

private:
    stack<int> stack1;
    stack<int> stack2;
};

int main()
{
    // stack<int> stacktest;
    // stacktest.push(1);
    // stacktest.push(2);
    // cout << stacktest.top() << endl;
    Solution s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    s.push(4);
    cout << s.pop() << endl;
    s.push(5);
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    return 0;
}