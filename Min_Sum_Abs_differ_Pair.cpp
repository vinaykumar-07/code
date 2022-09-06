class Solution{
public:
    long long findMinSum(vector<int> &A,vector<int> &B,int N){
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        long long int sum=0,temp=0;
        for(int i=0;i<N;i++)
        {
            temp=abs(A[i]-B[i]);
            sum=sum+temp;
        }
        return sum;
    } 
};