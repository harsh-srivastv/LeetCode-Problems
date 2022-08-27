# https://leetcode.com/problems/palindrome-number/

class Solution:
    def isPalindrome(self, x: int) -> bool:
        x = str(x)
        r = x[::-1]
        if x == r:
            return True
        else:
            return False