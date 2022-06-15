class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {

        ListNode *curr = head;
        while (n-- > 0 && curr != nullptr)
            curr = curr->next;

        if (curr == nullptr)
            return head->next;

        ListNode *slow = head;
        for (curr = curr; curr->next != nullptr; curr = curr->next)
            slow = slow->next;
        ListNode *it = slow->next;
        slow->next = slow->next->next;
        delete (it);
        return head;
    }
};