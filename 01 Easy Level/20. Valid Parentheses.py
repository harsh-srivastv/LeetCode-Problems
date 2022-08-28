# https://leetcode.com/problems/valid-parentheses/

class Solution:
    def isValid(self, s: str) -> bool:
        s = list(s)
        ans = []
        stack = []
        for i in range(len(s)):
            if len(stack)==0 and (s[i]==')' or s[i]==']' or s[i]=='}'):
                return False
        
            elif s[i] == "(" or s[i] == "{" or s[i] == "[":
                stack.append(s[i])
            
            elif s[i] == ")" and stack[-1] == "(":
                stack.pop()
            elif s[i] == "}" and stack[-1] == "{":
                stack.pop()
            elif s[i] == "]" and stack[-1] == "[":
                stack.pop()
            else:
                ans.append(s[i])
                
        if len(stack) == 0 and len(ans)==0:
            return True
        else:
            return False
                    