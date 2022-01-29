/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

static auto fast_io = []
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);
	return 0;
}();

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        if (!headA || !headB) return NULL;
        
        ListNode *a = headA;
        ListNode *b = headB;
        
        while(a != b)
        {
            a = (a ? a->next : headB);
            b = (b ? b->next : headA);
        }
        
        return a;
    }
};