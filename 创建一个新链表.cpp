#include <iostream>

using namespace std;


struct ListNode {
	int val;
	struct ListNode *next;
	// ListNode(int x) :
	// 		val(x), next(NULL) {
	// }
};

ListNode* creat()
{
    ListNode *p1, *p2, *p3;
    p1 = new ListNode;
    p2 = new ListNode;
    p3 = new ListNode;
    int a = 11, b = 12, c = 13;
    p1 -> val = a;    p1 ->next = p2;
    p2 -> val = b;    p2 ->next = p3;
    p3 -> val = c;    p3 ->next = NULL;
    return p1;
}

int main()
{
    ListNode* pHead;
    pHead = creat();
    while(pHead)
    {
        cout << pHead->val << endl;
        pHead=pHead->next;
    }
    return 0;
}


// class Solution {
// public:
//     Listnode * creatList()
//     {
//         Listnode * p1 = new Listnode;
//         Listnode * p2 = new Listnode;
//         Listnode * p3 = new Listnode;
//         p1 -> val = 1; p1 -> next = p2;
//         p2 -> val = 2; p2 -> next = p3;
//         p3 -> val = 3; p3 -> next = NULL;
//         return p1;
//     }

//     void printListnode(Listnode * pHead)
//     {
//         while (pHead)
//         {
//             cout << pHead -> val << endl;
//             pHead = pHead -> next;
//         }
//     }
// };

// int main()
// {
//     Solution s;
//     cout << "--" << endl;
//     Listnode * pHead = s.creatList();
//     s.printListnode(pHead);
//     return 0;
// }