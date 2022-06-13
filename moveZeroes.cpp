class Solution {
public:
    void moveZeroes(vector<int>& a) {
        unsigned int count=0,k=0;
        for(unsigned int i=0;i<a.size();i++){
        if(a[i]==0 ){
            count++;
        }else{
            a[k]=a[i];
            k++;
        }
        }
        for(unsigned int i=a.size()-count;i<a.size();i++){
            a[i]=0;
        }
        
    }
};