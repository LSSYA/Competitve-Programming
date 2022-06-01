class Solution {
public:
    double myPow(double x, int n) 
   {
        if(n==0)
            return 1;
        
    return (n<0) ? helper(1/x, (-1 * (long long)n)) : helper(x,n);
        
    }
    double helper(double x, long long n)
    {
        if(x==0)
            return 0;
        if(n==1)
            return x;
        int mid = n/2;
        double temp  = helper(x *x, n/2);
        return temp * ((n%2) ? x : 1);
    }
};