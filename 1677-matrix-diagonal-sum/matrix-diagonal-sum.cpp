class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int m=mat.size();
        int sum=0;
        for (int i=0;i<m;i++) {
            sum+=mat[i][i];               
            sum+=mat[i][m-i-1];       
        }
        if (m%2!=0) {
            sum-=mat[m/2][m/2];
        }
        return sum;
        // int m=mat.size();
        // int n=mat[0].size();
        // int s=0;
        // for(int i=0;i<m;i++){
        //     for(int j=0;j<n;j++){
        //         if(i==j){
        //             s+=mat[i][j];
        //         }
        //     }
        // }
        // int i=0,j=n-1;
        // while(i<n && j>0){
        //     s+=(mat[i][j]);
        //     i++;
        //     j--;
        // }
       // return s;
    }
};