/*
Link : https://leetcode.com/problems/set-matrix-zeroes/

TC : O(m*n)
SC : O(n)
*/


class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
    vector<pair<int,int>>p;
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
           if(matrix[i][j]==0){
               p.push_back({i,j});
           }
        }
    }
    for(int i=0;i<p.size();i++){
        int a=p[i].first,b=p[i].first,c=p[i].second,d=p[i].second;
        while(a<matrix.size()){
            matrix[a++][p[i].second]=0;
        }
        while(b>=0){
            matrix[b--][p[i].second]=0;
        }
        while(c>=0){
            matrix[p[i].first][c--]=0;
        }
        while(d<matrix[0].size()){
            matrix[p[i].first][d++]=0;
        }
    }
    }
};