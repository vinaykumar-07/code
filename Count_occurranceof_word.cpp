class Solution{
    public:
    
    int count =0 ;
    
    void dfs(int i,int j,vector<vector<char>> &mat,string&target,int z)
    {
        
        // if we go out of scope of matrix or if the element in string does not match
        if(i<0 || j<0 || i>=mat.size() || j>=mat[i].size() || mat[i][j]!=target[z])
            return;
        // if we found oour string then increase count and return
        if(z==target.size()-1)
        {
            count++;
            return;
        }
        
        //mark as visited
        mat[i][j]='*';
        
        dfs(i,j+1,mat,target,z+1); //right
        dfs(i,j-1,mat,target,z+1);  //left
        dfs(i+1,j,mat,target,z+1);  //down
        dfs(i-1,j,mat,target,z+1); //up
        
        // undo the changes done to matrix
        mat[i][j]=target[z];
            
    }
    
    int findOccurrence(vector<vector<char> > &mat, string target){
        
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                 if(mat[i][j]==target[0])
                    dfs(i,j,mat,target,0);
            }
        }
        
        return count;
    }
};