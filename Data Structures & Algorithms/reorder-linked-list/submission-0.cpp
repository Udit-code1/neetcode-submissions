class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;

        while (head) {
            ListNode* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }

        return prev;
    }

    void reorderList(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return;

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* head2 = reverseList(slow->next);
        slow->next = NULL;

        ListNode* p;
        ListNode* u;

        ListNode* s = head;
        ListNode* f = head2;

        while (s && f) {
            p = s->next;
            u = f->next;

            s->next = f;
            f->next = p;

            s = p;
            f = u;
        }
    }
};