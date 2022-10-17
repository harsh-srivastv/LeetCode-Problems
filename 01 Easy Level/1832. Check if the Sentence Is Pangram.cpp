// https://leetcode.com/problems/check-if-the-sentence-is-pangram/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> temp(26,0);
        
        for(int x: sentence){
            temp[x-97]++;
        }
        
        for(int i=0; i<temp.size(); i++){
            if(temp[i] == 0) return false;
        }
        return true;
    }
};