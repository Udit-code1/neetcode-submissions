class Solution {
public:
    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        while (head) {
            ListNode* nxt = head->next;
            head->next = prev;
            prev = head;
            head = nxt;
        }
        return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode dummy(0);
        dummy.next = head;
        ListNode* prevGroup = &dummy;

        while (true) {
            ListNode* kth = prevGroup;
            for (int i = 0; i < k && kth; i++)
                kth = kth->next;

            if (!kth) break;

            ListNode* groupNext = kth->next;
            ListNode* groupStart = prevGroup->next;

            kth->next = nullptr;

            prevGroup->next = reverse(groupStart);
            groupStart->next = groupNext;

            prevGroup = groupStart;
        }

        return dummy.next;
    }
};