// https://leetcode.com/problems/3sum-closest/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int mysum=0;
        int minn = INT_MAX;
        int ans;
        for(int i=0;i<nums.size()-2;i++){
            int first = nums[i];
            int start = i+1;
            int end = nums.size()-1;
            while(start < end){
                mysum = first + nums[start] + nums[end];
                if(mysum == target) return mysum;
                if(abs(mysum-target)<minn){
                    minn = abs(mysum-target);
                    ans = mysum;
                }
                if(mysum < target) start++;
                else end--;
            }
        }
        return ans;
    }
};