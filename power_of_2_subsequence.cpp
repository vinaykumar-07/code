 Class Solution{ 
 public:
     long long numberOfSubsequences(int N, long long A[]){
        long long ans=1;
        long long mod = 1000000007;
        long long count=0;
        for(int i=0;i<N;i++) {

            if((A[i] & A[i]-1)==0)

                count++;
        }
        // similar to pow(count,2) but it's value will be large so taking modulo
        while(count--)
            ans=(ans*2)%mod;
        return ans-1;

    }
};