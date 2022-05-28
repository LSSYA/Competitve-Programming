class Solution {
public:
    int fib(int n) {
        
        if( n < 1)
        {
            return 0;
        }
        
        int first = 0;
        int second = 1;
        
        for( int i =2; i<=n; i++)
        {
            int temp = second;
            second += first;
            first = temp;
        }
        
        return second;    
    }
};