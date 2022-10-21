# https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/

# Definition for singly-linked list.
from typing import Optional


class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head == None: return None
        if head.next == None: return head
        prev = ListNode(0)
        curr = head
        head = prev
        while curr is not None and curr.next is not None:
            if curr.next is not None and curr.val == curr.next.val:
                while curr.next is not None and curr.val == curr.next.val:
                    curr = curr.next
                prev.next = curr.next
            else:
                prev.next = curr
                prev = prev.next
            
            curr = curr.next
            
        return head.next