class Solution {
    private:
    int primary(vector<vector<int>>& mat){
        int sum=0;
        int row=mat.size();
        for(int i=0;i<row;i++){
            sum+=mat[i][i];
        }
        return sum;
    }
    int secondary(vector<vector<int>>& mat){
        int sum=0,row=mat.size();
        for(int i=0;i<row;i++){
            sum+=mat[i][row-i-1];
        }
        return sum;
    }
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int leftsum=primary(mat);
        int rightsum=secondary(mat);
        int n=mat.size();
        if(n%2!=0){
            int middle=mat[n/2][n/2];
            return leftsum+rightsum-middle;
        }
        return leftsum+rightsum;
    }
};