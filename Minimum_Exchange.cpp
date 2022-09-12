class Solution {
public:
int MinimumExchange(vector<vector<char>>matrix){
    int m=matrix.size(),n=matrix[0].size();
    int count1=0,count2=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]=='A'){
                if((i+j)%2) count1++;
                else count2++;
            }else{
                if((i+j)%2) count2++;
                else count1++;
            }
        }
    }
    int result=min(count1,count2);
     if (result%2==0)
           return result/2;
       else 
           return min(result,(m*n-result)/2);
   }
};