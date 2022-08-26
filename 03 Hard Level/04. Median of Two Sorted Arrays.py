# https://leetcode.com/problems/median-of-two-sorted-arrays/submissions/

class Solution:
    def findMedianSortedArrays(self, nums1: list[int], nums2: list[int]) -> float:
        ans = nums1 + nums2
        ans.sort()
        print(ans)
        if len(ans)%2!=0:
            mid = len(ans)//2
            median = ans[mid]
            return round(median,5)
        else:
            first = len(ans)//2
            second = len(ans)//2 - 1
            median = (ans[first] + ans[second])/2
            return round(median,5)