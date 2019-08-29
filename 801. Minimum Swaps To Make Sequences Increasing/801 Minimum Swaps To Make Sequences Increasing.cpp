class Solution {
public:
    int minSwap(vector<int>& A, vector<int>& B) {
        int len = A.size();
        int n = 0;
        int y = 1;
        int nn, ny, yn, yy;
        for(int i = 1; i < len; ++i){
            nn = (A[i]>A[i-1]&&B[i]>B[i-1])? n:len+1;
            yn = (A[i]>B[i-1]&&B[i]>A[i-1])? y:len+1;
            
            ny = (A[i]>B[i-1]&&B[i]>A[i-1])? n+1:len+1;
            yy = (A[i]>A[i-1]&&B[i]>B[i-1])? y+1:len+1;
            
            n = min(nn,yn);
            y = min(yy,ny);
        }
        return min(n,y);
    }
};
