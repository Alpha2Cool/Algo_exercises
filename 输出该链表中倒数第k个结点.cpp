#include <iostream>

using namespace std;


struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};



class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        int len = 1;
        ListNode* p = pListHead;
        while (p -> next != NULL)
        {
            len++;
            p = p -> next;
        }
        p = pListHead;
        for (int i=0; i<len-k+1; i++)
        {
            p = p -> next;
        }
        return p;
    }

};

int main()
{
    ListNode* pv = NULL;
    ListNode* p = NULL;
    for (int i=0;i<5;i++)
    {
        p->val=i+1;
        p->next=pv;

        
    }
    pv->next=NULL;
    return 0;
}
