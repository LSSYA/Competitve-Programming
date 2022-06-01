class Solution {
public:
    double myPow(double x, long long n) 
    {
        if(n<0)
        {
            n *= -1;
            x = 1/x;
        }
        if(n==0)
            return 1;
        if(n==1)
            return x;
        
        return myPow(x*x, n/2) * ((n%2) ? x : 1);
    }
};