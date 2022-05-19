class Solution {
public:
    string sortSentence(string s) {
        
        string ans="";
        
        map<int,string> match;
        
        string word="";
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
                match[s[i-1]-'0']=word;
                
                word="";
                i++;
            }
            word+=s[i];
        }
        match[s[s.length()-1]-'0']=word;
        
        
        for(auto it:match)
        {
            ans+=it.second;
            ans[ans.length()-1]=' ';
        }
        ans.erase(ans.length()-1);
        return ans;
            
    }
};