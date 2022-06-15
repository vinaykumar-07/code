class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {

        int len = 0;

        ListNode *curr = head;

        while (curr != NULL)
        {
            len++;
            curr = curr->next;
        }

        int idx = (len / 2) + 1;

        int i = 1;
        curr = head;

        while (curr != NULL)
        {
            if (i == idx)
            {
                break;
            }
            else
            {
                i++;
                curr = curr->next;
            }
        }
        return curr;
    }
};