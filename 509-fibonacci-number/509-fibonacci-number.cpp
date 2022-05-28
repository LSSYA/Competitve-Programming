class Solution {
public:
    int fib(int n) {
        
     vector<int> stack(n+1);
        if( n == 0 )
        {
            return 0;
        }
        
        stack[1] = 1;
        
        for(int i=2; i<=n; i++)
        {
            stack[i] = stack[i-1] + stack[i-2];
        }
        
        return stack[n];
    }
};