// https://leetcode.com/problems/minimum-difficulty-of-a-job-schedule/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    /*
    1. check if size of d is greater than job array, if so then return -1.
    2. else create a 2d vector of size d*jobsize and fill it with -1
    3. using recursion if d == 1 then just return the max of the job array
    4. else put cut at every possible place and update the dp table with min value
    5. for this we use res and max 
    6. max stores the maximum of all subarray values and res stores min sum of mx values.
    7. at last return the min possible value present at dp[d][index].
    */
    int minDifficulty(vector<int>& jobDifficulty, int d) {
        
        if(d > jobDifficulty.size()) return -1;
        vector<vector<int>> dp(d+1, vector<int>(jobDifficulty.size(), -1));
        return solve(d, 0, jobDifficulty, dp);
    }
    
    int solve(int d, int index, vector<int> &job, vector<vector<int>> &dp){
        
        if(d == 1){
            int mx = 0;
            while(index < job.size()){
                mx = max(mx, job[index++]);
            }
            return mx;
        }
        
        if(dp[d][index] != -1) return dp[d][index];
        
        int res = INT_MAX;
        int mx = 0;
        
        for(int i=index; i<job.size()-d+1; i++){
            mx = max(mx, job[i]);
            res = min(res, mx + solve(d-1, i+1, job, dp));
        }
        return dp[d][index] = res;
    }
};