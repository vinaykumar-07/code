class Solution
{
public:
    void reorderList(ListNode *head)
    {
        unordered_map<int, int> mp;
        ListNode *curr = head;
        ListNode *temp = head;
        int i = 0;
        while (temp != NULL)
        { // to find the length of LL and to insert values in the map
            mp[i] = temp->val;
            temp = temp->next;
            i++;
        }
        int len = i;

        i = 0;
        while (curr != NULL)
        { // odd tracing
            curr->val = mp[i];
            if (curr->next and curr->next->next)
            {
                curr = curr->next->next;
            }
            else
            {
                break;
            }
            i++;
        }

        curr = head->next;
        i = len - 1;
        while (curr != NULL)
        { // even tracing
            curr->val = mp[i];
            if (curr->next and curr->next->next)
            {
                curr = curr->next->next;
            }
            else
            {
                break;
            }
            i--;
        }
    }
};