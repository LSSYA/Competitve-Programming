class Solution {
public:
     string decodeString(string s) 
     {
        int i = 0;
        return decode_helper(s, i);
     }
    
    string decode_helper(string s, int& i) 
    {
        string res = "";
        int n = s.length();
        int num = 0;
        
        while (i < n && s[i] != ']') 
        {
            if (isdigit(s[i])) 
            {
                num = num * 10 + (s[i] - '0');
                i++;
            } 
            else if (isalpha(s[i])) 
            {
                res += s[i];
                i++;
            } 
            else 
            {
                i++;
                
                string t = decode_helper(s, i);
                
                i++;
                
                while (num > 0) 
                {
                    res += t;
                    num--;
                }
            }
        }
        
        return res;
    }
};