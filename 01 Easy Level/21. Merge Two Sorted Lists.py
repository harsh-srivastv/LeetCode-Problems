# https://leetcode.com/problems/merge-two-sorted-lists/

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def mergeTwoLists(self, list1: (ListNode), list2: (ListNode)) -> (ListNode):
        if list1 is None:
            return list2
        if list2 is None:
            return list1
        
        if list1.val < list2.val:
            temp = head = ListNode(list1.val)
            list1 = list1.next
        else:
            temp = head = ListNode(list2.val)
            list2 = list2.next
            
        while list1 is not None or list2 is not None:
            if list1 is None and list2 is not None:
                temp.next = ListNode(list2.val)
                list2 = list2.next
            elif list1 is not None and list2 is None:
                temp.next = ListNode(list1.val)
                list1 = list1.next
            else:
                if list1.val < list2.val:
                    temp.next = ListNode(list1.val)
                    list1 = list1.next
                else:
                    temp.next = ListNode(list2.val)
                    list2 = list2.next
            temp = temp.next
        return head
        