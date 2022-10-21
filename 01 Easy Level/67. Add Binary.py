# https://leetcode.com/problems/add-binary/

class Solution:
    def addBinary(self, a: str, b: str) -> str:
        num1 = 0
        num2 = 0
        
        for i in range(len(a)-1,-1,-1):
            temp = len(a)-i-1
            num1 = num1 + int(a[i])*(2**temp)
            
        for j in range(len(b)-1, -1, -1):
            temp = len(b)-j-1
            num2 += int(b[j])*(2**temp)
        
        summ = num1+num2
        if summ == 0:
            return "0"
        
        ans = ""
        
        while(summ):
            ans += str(summ%2)
            summ = summ//2
            
        return ans[::-1]