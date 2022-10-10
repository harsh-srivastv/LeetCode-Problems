// https://leetcode.com/problems/3sum/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        
        for(int i=0;i<(int)(nums.size())-2;i++)
        {    
            if(i==0 || (i>0 && nums[i] != nums[i-1]))
            {
                int start = i+1;
                int end = (int)(nums.size())-1;
                int mysum = 0-nums[i];
                while(start < end){
                    if(mysum == nums[start]+nums[end])
                    {    
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[start]);
                        temp.push_back(nums[end]);
                        ans.push_back(temp);
                        
                        while(start<end and nums[start]==nums[start+1]) start++;
                        while(start<end and nums[end] == nums[end-1]) end--;
                        
                        start++;
                        end--;
                    }
                    else if(nums[start]+nums[end] < mysum) start++;
                    else end--;
                } 
            }
        }
        return ans;
    }
};
