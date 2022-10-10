// https://leetcode.com/problems/remove-nth-node-from-end-of-list/
#include<bits/stdc++.h>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* size=head;
        int count=0;
        while(size){
            count++;
            size = size->next;
        }
        
        int pos;
        pos = count-n;
        if(count==1) return NULL;
        if(pos == 0){
            head = head->next;
            return head;
        }
        ListNode* curr = head;
        while(curr){
            pos--;
            if(pos==0){
                ListNode* temp = curr->next;
                if(curr->next->next == NULL){
                    curr->next = NULL;
                    return head;
                }
                curr->next = curr->next->next;
                delete(temp);
                
            }
            curr = curr->next;
        }
        return head;
    }
};