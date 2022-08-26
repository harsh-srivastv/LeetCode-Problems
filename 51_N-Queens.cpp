// https://leetcode.com/problems/n-queens/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    bool check(vector<string> board, int row, int col, int n){
        for(int i=row-1;i>=0;i--){
            if(board[i][col]=='Q') return false;
        }
        
        for(int i=row-1, j=col-1;i>=0 and j>=0;i--,j--){
            if(board[i][j]=='Q') return false;
        }
        
        for(int i=row-1, j=col+1;i>=0 and j<n;i--,j++){
            if(board[i][j]=='Q') return false;
        }
        return true;
    }
    
    void queen(vector<string> &board, int row, int n, vector<vector<string>> &res){
        if(row == n){
            // if we reached last cell then we return the board
            res.push_back(board);
            return ;
        }
        for(int col=0;col<n;col++){
            if(check(board, row, col, n)){  //condition for checking conflict
                board[row][col] = 'Q';
                queen(board, row+1, n, res);
                board[row][col] = '.'; //replacing Q with '.' is we found conflict
            }
        }
        
    }
    
    vector<vector<string>> solveNQueens(int n) {
        // creating matrix to store result
        vector<vector<string>> res; 
        // creating board with '.' at all cells
        vector<string> board(n, string(n, '.'));
        
        queen(board, 0, n, res);
        return res;
    }
};