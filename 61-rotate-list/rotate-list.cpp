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
    ListNode* rotateRight(ListNode* head, int k) {
        if((head==NULL) || (head->next==NULL)) return head;
        ListNode* ptr2 = head, *ptr1 = head;
        int len = 1;
        while((ptr2!=NULL) && (ptr2->next!=NULL)){
            ptr2 = ptr2->next;
            len++;
        }
        k = k % len;

        int cnt = 1;
        while(cnt<len-k){
            ptr1 =ptr1->next;
            cnt++;
        }
        ptr2->next = head;
        head = ptr1->next;
        ptr1->next = NULL;
        return head;
    }
};