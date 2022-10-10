# https://leetcode.com/problems/minimum-size-subarray-sum/

import sys
class Solution:
    def minSubArrayLen(self, target: int, nums: list[int]) -> int:
        mysum = 0
        min_length = float('inf')
        j = 0
        for i in range(len(nums)):
            mysum += nums[i]
            while mysum >= target:
                min_length = min(min_length, i-j+1)
                mysum -= nums[j]
                j+=1
                
        if min_length == float('inf'):
            return 0
        return min_length
            
            