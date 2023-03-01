class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        int i=0,j=0;
        
        if(haystack.size() < needle.size())
        {
            return -1;
        }
        
        for(; j <= haystack.size() - needle.size(); j++)
        {
            int i=0, k = j;
            
            while(i < needle.size())
            {
                if(haystack[k] == needle[i])
                {                    
                    i++;
                    k++;
                    continue;
                }
                
                break;
            }
            
            if(i == needle.size())
                return j;
        }
        
        return -1;
    }
};