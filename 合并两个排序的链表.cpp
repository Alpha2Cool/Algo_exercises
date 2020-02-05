#include <iostream>

using namespace std;


struct ListNode {
	int val;
	struct ListNode *next;
	// ListNode(int x) :val(x), next(NULL) {
	// }
};

class Solution {
public:
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
    {
        ListNode* pHead=NULL, *p=NULL;
        while(pHead1 || pHead2)
        {
            if(pHead1 == NULL)  {p = pHead2; break;}
            if(pHead2 == NULL)  {p = pHead1; break;}
             
            cout << pHead1 << " " << pHead2 << " " << pHead1->val << " " << pHead2->val << endl;
            cout << "[" << p << "]" << endl;

            if(pHead1->val <= pHead2->val)
            {
                p->next = pHead1;
                pHead1 = pHead1->next;
            }
            else
            {
                p->next = pHead2;
                pHead2 = pHead2->next;
            }
            cout << p->val << endl;
            if(pHead==NULL) {pHead = p; cout << "first p" << " " << p << endl;}
 
            cout << p << " -> " << p->next << endl;
            p = p->next;
        }
    return pHead;
    }
};

ListNode* creat(int a, int b, int c)
{
    ListNode *p1, *p2, *p3;
    p1 = new ListNode;
    p2 = new ListNode;
    p3 = new ListNode;
    // p1 = new ListNode(a);   
    // p2 = new ListNode(b);
    // p3 = new ListNode(c);
    p1 -> val = a;    p1 ->next = p2;
    p2 -> val = b;    p2 ->next = p3;
    p3 -> val = c;    p3 ->next = NULL;
    // cout << p1->val << endl;
    // cout << p2->val << endl;
    // cout << p3->val << endl;
    return p1;
}

int main()
{
    ListNode* pHead, *pHead1, *pHead2;
    pHead1 = creat(10,12,14);
    pHead2 = creat(11,13,15);
    Solution s;
    pHead = s.Merge(pHead1,pHead2);
    cout << endl;
    while(pHead)
    {
        cout << pHead << " " << pHead->val << endl;
        pHead = pHead->next;
    }
    return 0;
}
