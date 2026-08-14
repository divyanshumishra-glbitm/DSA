class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size()-1;i++){
            for(int j=i+1;j<matrix.size();j++){
            int temp=matrix[i][j];
            matrix[i][j]=matrix[j][i];//transpose of the matrix
            matrix[j][i]=temp;
            }
        }
        for(int i=0;i<matrix.size();i++){
            int beg=0,end=matrix.size()-1;
            while(beg<end){
            int temp=matrix[i][beg]; //flip left complete matrix or reverse 
            matrix[i][beg]=matrix[i][end];
            matrix[i][end]=temp;
            beg++,end--;
            }
        }
    }
};