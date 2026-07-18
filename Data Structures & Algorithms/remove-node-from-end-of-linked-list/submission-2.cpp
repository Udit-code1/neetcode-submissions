/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL || n==0)
        return head;
        if(head!=NULL && head->next==NULL && n==1)
        return NULL;
        ListNode* temp=head;
        int c=0;
        while(temp!=NULL)
         {
                c++;
                temp=temp->next;
        }
        if(c==n)
            return head->next;
        ListNode* f=head;
        while(n>0){
            f=f->next;
            n--;
        }
        ListNode* s=head;
        while(f->next!=NULL){
            s=s->next;
            f=f->next;
        }
        s->next=s->next->next;
        return head;

    }
};
