// https://leetcode.com/problems/contains-duplicate-ii/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    /*
    1. make a hash map storing the first occurences of the elements.
    2. if element is found second time then find abs diff of first and current occurence
    3. if abs <= k then return true
    4. else update the ma with current occurence and continue
    5. at last when none found then return false.
    */
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        
        for(int i=0; i<nums.size(); i++){
            if(mp.count(nums[i])){
                if(abs(i - mp[nums[i]])<=k)
                    return true;
            }
            mp[nums[i]] = i;
        }
        return false;
    }
};