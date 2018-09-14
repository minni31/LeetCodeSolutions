/* Count the number of prime numbers less than a non-negative number, n. */

class Solution {
public:
    int countPrimes(int n) {
        if(n<=2)
            return 0;
        vector<bool> prime(n, false);
        int sum = 1;

        for(long long i=3; i<n; i+=2)
        {
            if(!prime[i])
            {
                sum++;
                for(long long j=i*i; j<n; j+=i)
                    prime[j]= true;
            }
        }
        return sum;
        
        
    }
};
