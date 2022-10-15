# https://leetcode.com/problems/string-compression/

class Solution:
    
    ''' if len of array is 1 then just return 1
        else take index at 0 which will update the aray with char occurences
        take pointer i and j at 0 initially
        move j till char[i]==char[j] and store the count with j-i
        then add char and its count in array using index variable
        if char count is > 9 then ad each digit as separate 1,2 for 12
        then put i = j and continuie the process till i<len and j<len'''
    
    def compress(self, chars: list[str]) -> int:
        if(len(chars) == 1):
            return 1
        
        index = 0
        i = 0
        while(i < len(chars)):
            j = i
            while(j < len(chars) and chars[i] == chars[j]):
                j+=1
                
            chars[index] = chars[i]
            index += 1
            
            if(j-i > 1):
                count = str(j-i)
                for k in count:
                    chars[index] = k
                    index += 1
            i=j
            
        return index