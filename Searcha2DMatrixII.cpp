class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
int col=matrix[0].size();
int rcount=0;
int ccount=col-1;
while(rcount<row && ccount>=0)
{
if(matrix[rcount][ccount]==target)
return true;
else if(matrix[rcount][ccount]>target)
ccount--;
else
rcount++;
}
return false;

    }
};