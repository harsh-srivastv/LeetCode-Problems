// https://leetcode.com/problems/majority-element/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int low=0, count=0;
        int high=nums.size()-1;
        int mid = low + (high-low)/2;
        int ele = nums[mid];
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==ele)
            {
                count++;
            }
        }
        if(count>nums.size()/2){
            return ele;
        }
        else return -1;
    }
};