// https://leetcode.com/problems/largest-perimeter-triangle/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int k = nums.size()-1;
        int j = k-1;
        int i = j-1;
        
        while(i >= 0){
            if(nums[i] + nums[j] > nums[k]){
                return nums[i]+nums[j]+nums[k];
            }
            k--;
            j--;
            i--;
        }
        
        return 0;
    }
};