class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int n = matrix.size();
        int m = matrix[0].size();

        int rl=0, rr=n-1;

        while(rl<=rr){
            int rm = (rl+rr)/2;
            if(target<= matrix[rm][m-1] && target>= matrix[rm][0]){
                int l=0, r=m-1;
                while(l<=r){
                    int mm = (l+r)/2;

                    if(matrix[rm][mm]==target) return true;

                    if(target<matrix[rm][mm]) r=mm-1;
                    else l=mm+1;
                }
            }
            
            if(target< matrix[rm][0]) rr= rm-1;
            else rl=rm+1;
        }

        return false;
    }
};
