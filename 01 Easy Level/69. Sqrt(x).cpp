// https://leetcode.com/problems/sqrtx/

// time complexity O(log(n))

class Solution {
public:
    int mySqrt(int x) {
        int low=0;
        int high=x;
        int ans = -1;
        while(low<=high)
        {
            long long int mid = low + (high-low)/2;
            long long int sqr = mid*mid;
            
            if(sqr == x){
                return mid;
            }
            else if(sqr>x){
                high = mid-1;
            }
            else{
                low = mid+1;
                ans = mid;
            }
        }
        return ans;
    }
};