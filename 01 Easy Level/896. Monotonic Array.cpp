// https://leetcode.com/problems/monotonic-array/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    int desc(vector<int> &nums){
        for(int i=1; i<nums.size(); i++){
            if(nums[i-1] < nums[i]){
                return 0;
            }
        }
        return 1;
    }
    
    int asc(vector<int> &nums){
        for(int i=1; i<nums.size(); i++){
            if(nums[i-1] > nums[i]){
                return 0;
            }
        }
        return 1;
    }
    
    bool isMonotonic(vector<int>& nums) {
        int res;
        int start = nums[0];
        int end = nums[nums.size()-1];
        
        if(start > end){
            res = desc(nums);
        }
        else{
            res = asc(nums);
        }
        
        if(res == 0) return false;
        return true;
    }
};